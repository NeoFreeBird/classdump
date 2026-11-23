//
#ifndef UIStackView_TFNAdditions_h
#define UIStackView_TFNAdditions_h
@import Foundation;

@interface UIStackView (TFNAdditions)

/* instance methods */
- (struct CGSize { double x0; double x1; })tfn_sizeFromSubviewsIntrinsicContentSize;
- (void)tfn_setArrangedSubviews:(id)subviews;
- (void)tfn_removeAllArrangedSubviews;

@end

#endif /* UIStackView_TFNAdditions_h */
