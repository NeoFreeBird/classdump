//
#ifndef T1OnboardingInsetFormAppearance_h
#define T1OnboardingInsetFormAppearance_h
@import Foundation;

@class TFNLegacyFormAppearance, UIColor;

@interface T1OnboardingInsetFormAppearance : TFNLegacyFormAppearance {
    /* instance variables */
    id /* block */ _lineSpacingBlock;
    id /* block */ _edgeInsetsBlock;
    UIColor *_customInputDisabledTextColor;
}

/* class methods */
+ (id)appearance;
+ (id)appearanceWithCustomLineSpacing:(id /* block */)spacing edgeInsets:(id /* block */)insets;
+ (id)appearanceWithCustomLineSpacing:(id /* block */)spacing edgeInsets:(id /* block */)insets inputDisabledTextColor:(id)color;

/* instance methods */
- (id)borderColor;
- (id)inputDisabledBackgroundColor;
- (id)inputDisabledTextColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsetsForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })errorEdgeInsetsForLayoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })errorContentEdgeInsetsForLayoutMetrics:(id)metrics;
- (double)lineSpacingForLayoutMetrics:(id)metrics;
- (id)generateFieldBackgroundImageForSectionBreaks:(unsigned long long)breaks withBackgroundColor:(id)color borderColor:(id)color layoutMetrics:(id)metrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })private_edgeInsetsForLayoutMetrics:(id)metrics;

@end

#endif /* T1OnboardingInsetFormAppearance_h */
