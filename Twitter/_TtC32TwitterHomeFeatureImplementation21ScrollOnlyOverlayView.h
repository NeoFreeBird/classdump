//
#ifndef _TtC32TwitterHomeFeatureImplementation21ScrollOnlyOverlayView_h
#define _TtC32TwitterHomeFeatureImplementation21ScrollOnlyOverlayView_h
@import Foundation;

@class Swift.Bool, TwitterHomeFeatureImplementation.ScrollOnlyOverlayView.InteractionMode, UIView, _$sSo12UIScrollViewCSgXw, _$sySo12UIScrollViewCcSg;

@interface TwitterHomeFeatureImplementation.ScrollOnlyOverlayView : UIView { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.ScrollOnlyOverlayView.InteractionMode mode;
    weak __C.UIScrollView? cachedScrollView;
    Swift.Bool hasConfiguredReadOnly;
    ((__C.UIScrollView) -> ())? onScrollViewDiscovered;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation21ScrollOnlyOverlayView_h */
