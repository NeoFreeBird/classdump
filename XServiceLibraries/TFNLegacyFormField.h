//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormField_h
#define TFNLegacyFormField_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNLegacyForm.h"
#include "TFNLegacyFormAppearance.h"
#include "TFNLegacyFormFieldValidity.h"
#include "TFNLegacyFormItem-Protocol.h"
#include "TFNValuePickerDataSource-Protocol.h"
#include "UIPickerViewDataSource-Protocol.h"

@class NSArray, NSFormatter, NSMutableSet, NSObject, NSSet, NSString, UIView;

@interface TFNLegacyFormField : NSObject <UIPickerViewDataSource, TFNLegacyFormItem, TFNValuePickerDataSource>

@property (weak, nonatomic) TFNLegacyForm *form;
@property (readonly, nonatomic) _Bool alreadyAssociatedWithCell;
@property (retain, nonatomic) TFNLegacyFormFieldValidity *validity;
@property (copy, nonatomic) NSString *internalUserInput;
@property (copy, nonatomic) NSString *appliedErrorMessage;
@property (nonatomic) _Bool errorMessageHidden;
@property (nonatomic) _Bool editing;
@property (readonly, nonatomic) id <NSCopying> identifier;
@property (readonly, nonatomic) _Bool expectsDiscreteInput;
@property (readonly, nonatomic) _Bool requiresExtraInput;
@property (readonly, nonatomic) _Bool requiresFirstInput;
@property (readonly, nonatomic) NSMutableSet *dependencies;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userInput;
@property (readonly, nonatomic) _Bool didChangeUserInput;
@property (readonly, nonatomic) unsigned long long validityState;
@property (readonly, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *supplementaryText;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (copy, nonatomic) NSString *hintText;
@property (readonly, nonatomic) NSSet *userInputSuggestions;
@property (copy, nonatomic) NSArray *validInputValues;
@property (retain, nonatomic) NSString *optionalMarkingText;
@property (retain, nonatomic) NSString *appendedOptionalMarkingText;
@property (copy, nonatomic) id /* block */ validationBlock;
@property (retain, nonatomic) NSFormatter *inputFormatter;
@property (retain, nonatomic) NSFormatter *outputFormatter;
@property (nonatomic) _Bool optional;
@property (nonatomic) _Bool emphasized;
@property (nonatomic) _Bool hasStackedTitle;
@property (nonatomic) _Bool underlined;
@property (nonatomic) _Bool filtersLineBreaks;
@property (nonatomic) _Bool autocorrect;
@property (nonatomic) _Bool indicatesValidity;
@property (nonatomic) _Bool canClearUserInput;
@property (nonatomic) _Bool finishesInputAfterValidation;
@property (nonatomic) _Bool hidesPrefixOnEmptyUserInput;
@property (nonatomic) _Bool allowsUserInput;
@property (nonatomic) _Bool defaultsToFirstValidInputValue;
@property (nonatomic) _Bool combinesWithNextFormField;
@property (nonatomic) _Bool showsWarningMessage;
@property (nonatomic) _Bool updatePrefixTextColorOnTyping;
@property (nonatomic) long long numberOfCharacters;
@property (nonatomic) unsigned long long inputStyle;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long capitalizationType;
@property (retain, nonatomic) NSString *textContentType;
@property (retain, nonatomic) NSString *passwordRulesDescriptor;
@property (nonatomic) unsigned long long securityLevel;
@property (nonatomic) unsigned long long valuePickerStyle;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) id /* block */ pickerCreationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

/* class methods */
+ (id)formFieldWithTitle:(id)title hintText:(id)text userInput:(id)input;

/* instance methods */
- (void)updateUserInput:(id)input;
- (void)updateUserInput:(id)input forced:(_Bool)forced;
- (void)clearUserInput;
- (void)reloadInputViews;
- (void)applyErrorMessage:(id)message;
- (void)registerWithForm:(id)form appearance:(id)appearance requiringFirstInput:(_Bool)input;
- (unsigned long long)updateValidityWithEditingState:(unsigned long long)state;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;
- (id)init;
- (_Bool)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)addFormFieldDependency:(id)dependency;
- (_Bool)isErrorMessageHidden;
- (_Bool)isEditing;

@end

#endif /* TFNLegacyFormField_h */
