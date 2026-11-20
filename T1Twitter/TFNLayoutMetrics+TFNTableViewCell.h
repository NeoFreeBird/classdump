//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLayoutMetrics_TFNTableViewCell_h
#define TFNLayoutMetrics_TFNTableViewCell_h
@import Foundation;

@interface TFNLayoutMetrics (TFNTableViewCell)

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })onboardingEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })onboardingEdgeInsetsWithPromptStyleHorizontalInsets;
- (double)onboardingSpacing;
- (id)layoutMetricsForFeedbackCellWithSectionBreaks:(unsigned long long)breaks;

@end

#endif /* TFNLayoutMetrics_TFNTableViewCell_h */
