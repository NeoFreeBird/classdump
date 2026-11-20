//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFormFieldDataItem_h
#define TFNFormFieldDataItem_h
@import Foundation;

#include "TFNFormFieldAppearance.h"
#include "TFNFormFieldView.h"

@class NSArray, NSAttributedString, NSObject, NSString, UITextInputPasswordRules;

@interface TFNFormFieldDataItem : NSObject

@property (retain, nonatomic) TFNFormFieldView *t1_formFieldView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSAttributedString *attributedTitleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *initialText;
@property (copy, nonatomic) NSArray *titleActiveRanges;
@property (copy, nonatomic) NSArray *subtitleActiveRanges;
@property (copy, nonatomic) NSArray *labelActiveRanges;
@property (copy, nonatomic) NSArray *footerActiveRanges;
@property (retain, nonatomic) TFNFormFieldAppearance *appearance;
@property (retain, nonatomic) NSString *textContentType;
@property (retain, nonatomic) id backingObject;
@property (nonatomic) long long displayedLines;
@property (nonatomic) long long maxCharacterCount;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long options;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (retain, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) _Bool secureTextEntry;
@property (copy, nonatomic) id /* block */ didChangeTextAction;
@property (copy, nonatomic) id /* block */ didPickValueAction;
@property (copy, nonatomic) id /* block */ didTapActiveRangeAction;
@property (copy, nonatomic) id /* block */ didBeginEditingAction;
@property (copy, nonatomic) id /* block */ didEndEditingAction;
@property (copy, nonatomic) id /* block */ didSelectItemAction;
@property (copy, nonatomic) id /* block */ didChangeContentSizeAction;
@property (copy, nonatomic) id /* block */ shouldBeginEditingDecider;
@property (copy, nonatomic) id /* block */ shouldEndEditingDecider;
@property (copy, nonatomic) id /* block */ shouldReturnDecider;
@property (copy, nonatomic) id /* block */ shouldSelectDecider;
@property (copy, nonatomic) id /* block */ shouldClearDecider;
@property (copy, nonatomic) id /* block */ inputViewProvider;
@property (copy, nonatomic) id /* block */ inputAccessoryViewProvider;
@property (copy, nonatomic) id /* block */ textEntryViewProvider;
@property (copy, nonatomic) id /* block */ inputFormatter;
@property (copy, nonatomic) id /* block */ outputFormatter;
@property (copy, nonatomic) id /* block */ textValidator;

/* instance methods */
- (id)init;

@end

#endif /* TFNFormFieldDataItem_h */
