//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32ImmersiveVideoTimelinePluginView_h
#define _TtC14T1TwitterSwift32ImmersiveVideoTimelinePluginView_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.ImmersiveVideoTimelineScrubber ?, T1TwitterSwift.ImmersiveVideoTimelineView ?, UIView, _$sSdSg;

@interface T1TwitterSwift.ImmersiveVideoTimelinePluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    Swift.Bool hasLoggedClipImpression;
    Swift.Bool hasLoggedClipComplete;
    Swift.Double? lastClipPlaybackSeconds;
    T1TwitterSwift.ImmersiveVideoTimelineView ? $__lazy_storage_$_videoTimelineView;
    T1TwitterSwift.ImmersiveVideoTimelineScrubber ? $__lazy_storage_$_scrubber;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)videoScrubHandlerWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift32ImmersiveVideoTimelinePluginView_h */
