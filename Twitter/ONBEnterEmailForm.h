//
#ifndef ONBEnterEmailForm_h
#define ONBEnterEmailForm_h
@import Foundation;

@class NSArray, NSString, TFNLegacyForm, TFNLegacyFormBooleanItem, TFNLegacyFormField;

@interface ONBEnterEmailForm : TFNLegacyForm {
    /* instance variables */
    NSString *_hintText;
    NSString *_discoverabilitySettingsTitle;
    NSArray *_activeRanges;
    id /* block */ _activeRangeTapAction;
}

@property (retain, nonatomic) TFNLegacyFormField *emailField;
@property (retain, nonatomic) TFNLegacyFormBooleanItem *discoverabilityItem;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) _Bool discoverabilitySettingsValue;

/* instance methods */
- (id)initWithHintText:(id)text discoverabilitySettingsTitle:(id)title discoverabilitySettingsValue:(_Bool)value activeRanges:(id)ranges activeRangeTapAction:(id /* block */)action;
- (id)sections;

@end

#endif /* ONBEnterEmailForm_h */
