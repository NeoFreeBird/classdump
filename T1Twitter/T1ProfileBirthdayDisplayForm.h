//
#ifndef T1ProfileBirthdayDisplayForm_h
#define T1ProfileBirthdayDisplayForm_h
@import Foundation;

@class NSString, TFNLegacyForm, TFNLegacyFormField;

@interface T1ProfileBirthdayDisplayForm : TFNLegacyForm

@property (copy, nonatomic) NSString *displayText;
@property (retain, nonatomic) TFNLegacyFormField *birthdayField;

/* instance methods */
- (id)initWithDisplayText:(id)text;
- (id)sections;

@end

#endif /* T1ProfileBirthdayDisplayForm_h */
