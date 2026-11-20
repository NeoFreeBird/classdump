//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyButtonEngagementAnimationPinnerView_h
#define TFNLegacyButtonEngagementAnimationPinnerView_h
@import Foundation;

@class UIView;

@interface TFNLegacyButtonEngagementAnimationPinnerView : UIView {
    /* instance variables */
    UIView *_anchorView;
    UIView *_targetView;
    struct CGSize { double width; double height; } _scaleFactor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)willRemoveSubview:(id)subview;
- (void)pinToContainer:(id)container;
- (void)attachView:(id)view targetView:(id)view scaleFactor:(struct CGSize { double x0; double x1; })factor;

@end

#endif /* TFNLegacyButtonEngagementAnimationPinnerView_h */
