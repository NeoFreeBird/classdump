//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26ImmersivePageIndicatorView_h
#define _TtC14T1TwitterSwift26ImmersivePageIndicatorView_h
@import Foundation;

@class UIControl, _$s13XDesignSystem13PageIndicatorCMn, _$s21TweetMediaAttachments0B18ThumbnailStripViewCMn, _$sySbcSg, _$sySicSg;

@interface T1TwitterSwift.ImmersivePageIndicatorView : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.PageIndicator dots;
    nominal type descriptor for TweetMediaAttachments.MediaThumbnailStripView thumbnailStrip;
    ((Swift.Int) -> ())? onSelectPage;
    ((Swift.Bool) -> ())? onScrubbingDidChange;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift26ImmersivePageIndicatorView_h */
