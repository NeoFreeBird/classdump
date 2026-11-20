//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
