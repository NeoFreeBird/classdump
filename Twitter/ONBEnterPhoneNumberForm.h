//
#ifndef ONBEnterPhoneNumberForm_h
#define ONBEnterPhoneNumberForm_h
@import Foundation;

@class NSArray, NSString, TFNLegacyForm, TFNLegacyFormBooleanItem, TFNLegacyFormField;

@interface ONBEnterPhoneNumberForm : TFNLegacyForm {
    /* instance variables */
    NSString *_hintText;
    NSString *_defaultCountryCode;
    NSString *_discoverabilitySettingsTitle;
    NSArray *_countryCodes;
    NSArray *_activeRanges;
    id /* block */ _activeRangeTapAction;
}

@property (retain, nonatomic) TFNLegacyFormField *countryCodeField;
@property (retain, nonatomic) TFNLegacyFormField *phoneNumberField;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *discoverabilityItem;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) _Bool discoverabilitySettingsValue;

/* instance methods */
- (id)initWithHintText:(id)text countryCodes:(id)codes defaultCountryCode:(id)code discoverabilitySettingsTitle:(id)title discoverabilitySettingsValue:(_Bool)value activeRanges:(id)ranges activeRangeTapAction:(id /* block */)action;
- (id)sections;
- (void)private_updatePhoneNumberFieldFormatterForCountryCode:(id)code;
- (void)private_countryCodeDidUpdateWithNotification:(id)notification;
- (id)private_nameForCountryChoice:(id)choice;

@end

#endif /* ONBEnterPhoneNumberForm_h */
