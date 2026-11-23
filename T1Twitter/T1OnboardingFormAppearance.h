//
#ifndef T1OnboardingFormAppearance_h
#define T1OnboardingFormAppearance_h
@import Foundation;

@class TFNLegacyFormAppearance;

@interface T1OnboardingFormAppearance : TFNLegacyFormAppearance

/* instance methods */
- (double)lineSpacingForLayoutMetrics:(id)metrics;
- (id)generateFieldBackgroundImageForSectionBreaks:(unsigned long long)breaks withBackgroundColor:(id)color borderColor:(id)color layoutMetrics:(id)metrics;
- (id)inputDisabledBackgroundColor;

@end

#endif /* T1OnboardingFormAppearance_h */
