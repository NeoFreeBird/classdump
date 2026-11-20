//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift32LegacySegmentedLiveIndicatorView_h
#define _TtC10TFNUISwift32LegacySegmentedLiveIndicatorView_h
@import Foundation;

@class UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo7CALayerC;

@interface TFNUISwift.LegacySegmentedLiveIndicatorView : UIView { // (Swift)
    /* instance variables */
    __C.CALayer dotLayer;
    nominal type descriptor for Combine.AnyCancellable ? reduceMotionCancellable;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)refreshPulse;

@end

#endif /* _TtC10TFNUISwift32LegacySegmentedLiveIndicatorView_h */
