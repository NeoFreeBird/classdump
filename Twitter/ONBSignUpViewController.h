//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSignUpViewController_h
#define ONBSignUpViewController_h
@import Foundation;

#include "ONBComponentCollectionViewModelObserver-Protocol.h"
#include "ONBItemsDataViewController.h"
#include "ONBSignUpViewControllerDelegate-Protocol.h"
#include "ONBSignUpViewControllerInputState.h"
#include "T1UIInstrumentationWebViewControllerDelegate-Protocol.h"

@class NSDateFormatter, NSString, T1UIInstrumentationWebViewController, TFNFormFieldDataItem, TFNTwitterAccount;

@interface ONBSignUpViewController : ONBItemsDataViewController <ONBComponentCollectionViewModelObserver, T1UIInstrumentationWebViewControllerDelegate> {
    /* instance variables */
    id <ONBSignUpViewControllerDelegate> _delegate;
    unsigned long long _allowedIdentifiers;
    _Bool _shouldSetTextContentTypes;
    _Bool _shouldShowBirthday;
    NSDateFormatter *_birthdayFormatter;
    NSString *_birthdayExplanation;
    NSString *_birthdayHint;
    NSString *_emailHint;
    NSString *_nameHint;
    NSString *_phoneHint;
    NSString *_phoneOrEmailHint;
    ONBSignUpViewControllerInputState *_inputState;
    T1UIInstrumentationWebViewController *_instrumentationViewController;
    TFNTwitterAccount *_account;
}

@property (retain, nonatomic) TFNFormFieldDataItem *phoneNumberField;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model nameHint:(id)hint phoneHint:(id)hint emailHint:(id)hint phoneOrEmailHint:(id)hint birthdayHint:(id)hint phoneModeButtonLabel:(id)label emailModeButtonLabel:(id)label emailModeNextButtonLabel:(id)label birthdayExplanation:(id)explanation instrumentationURL:(id)url shouldSetTextContentTypes:(_Bool)types shouldShowBirthday:(_Bool)birthday allowedIdentifiers:(unsigned long long)identifiers delegate:(id)delegate;
- (void)clearAll;
- (void)clearAndSelectField:(long long)field;
- (void)selectField:(long long)field;
- (void)viewDidLoad;
- (void)abandon;
- (void)submit;
- (void)updateFooterButtonsForSubmittability:(long long)submittability;
- (void)instrumentationWebViewController:(id)controller didFinishLoadingWithResult:(id)result;
- (void)componentsViewModelDidUpdate:(id)update withUpdateType:(long long)type;
- (id)private_nameItem;
- (id)private_phoneCountryItem;
- (id)private_countryCodesWithNames;
- (void)private_didPickCountry:(id)country;
- (id)private_phoneItemField;
- (void)private_updatePhoneNumberFieldCountryCode;
- (id)private_emailItem;
- (id)private_phoneOrEmailItem;
- (id)private_birthdayItem;
- (id)private_fieldDataItemWithHintText:(id)text identifier:(long long)identifier;
- (id /* block */)private_wrappedTextValidator:(id /* block */)validator;
- (id /* block */)private_wrappedInputFormatter:(id /* block */)formatter;
- (id)private_birthdayMaximumDate;
- (void)private_birthdayDidChange:(id)change;
- (void)private_selectCurrentContactField;
- (void)private_selectOtherContactField;
- (void)private_updateContactFieldVisibility;
- (void)private_setVisibleContactField:(long long)field;
- (void)private_updateSwapButtonForCurrentItem:(id)item;
- (void)private_updateNextButtonForNavigation:(_Bool)navigation;
- (long long)private_currentField;
- (id)private_currentItem;
- (long long)private_fieldForItem:(id)item;
- (id)private_itemForField:(long long)field;
- (void)private_selectField:(long long)field;
- (void)private_setText:(id)text forField:(long long)field;
- (id)private_textForField:(long long)field;

@end

#endif /* ONBSignUpViewController_h */
