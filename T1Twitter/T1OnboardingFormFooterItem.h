//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OnboardingFormFooterItem_h
#define T1OnboardingFormFooterItem_h
@import Foundation;

@class NSString, TFNButton, TFNLegacyFormCustomItem;

@interface T1OnboardingFormFooterItem : TFNLegacyFormCustomItem

@property (retain, nonatomic) TFNButton *submitButton;
@property (retain, nonatomic) TFNButton *secondaryButton;
@property (copy, nonatomic) NSString *submitButtonLabel;
@property (copy, nonatomic) NSString *secondaryButtonLabel;

/* instance methods */
- (id)initWithSubmitButtonLabel:(id)label secondaryButtonLabel:(id)label action:(SEL)action;

@end

#endif /* T1OnboardingFormFooterItem_h */
