//
#ifndef _TtC14T1TwitterSwift28VideoBottomSegmentPlayerView_h
#define _TtC14T1TwitterSwift28VideoBottomSegmentPlayerView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ExternalPlaybackOverlayView, T1TwitterSwift.ExternalPlaybackOverlayView.Thumbnail ?, T1TwitterSwift.VideoBottomSegmentPlayerView.SwipeIntent, T1TwitterSwift.VideoBottomSegmentPlayerViewDelegate ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem9ButtonRowCMn, _$sSD -> T1TwitterSwift.VideoBottomSegmentPlayerView.DockAction _$s13XDesignSystem6ButtonCMn, _$sSS, _$sSo11UIImageViewC, _$sSo19T1BroadcastPillViewC, _$sSo6UIViewC, _$sSo7UILabelC, __C.T1BroadcastPillViewType ?;

@interface T1TwitterSwift.VideoBottomSegmentPlayerView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.VideoBottomSegmentPlayerViewDelegate ? delegate;
    nominal type descriptor for CoreGraphics.CGFloat videoAspectRatio;
    Swift.String authorName;
    Swift.String username;
    __C.T1BroadcastPillViewType ? livePillType;
    Swift.Bool isLivePillSuppressed;
    Swift.Bool isSkipToLiveVisible;
    Swift.Bool isPlaying;
    __C.UIView playerPreview;
    __C.UIImageView thumbnailImageView;
    T1TwitterSwift.ExternalPlaybackOverlayView.Thumbnail ? thumbnailSource;
    T1TwitterSwift.ExternalPlaybackOverlayView airPlayOverlayView;
    __C.UIView playerPreviewContainer;
    __C.UILabel authorLabel;
    __C.UILabel usernameLabel;
    nominal type descriptor for XDesignSystem.ButtonRow row;
    Swift.Dictionary -> T1TwitterSwift.VideoBottomSegmentPlayerView.DockAction nominal type descriptor for XDesignSystem.Button buttons;
    __C.T1BroadcastPillView livePillView;
    T1TwitterSwift.VideoBottomSegmentPlayerView.SwipeIntent swipeIntent;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleViewTap;
- (void)handlePan:(id)pan;
- (void)handleDismissTap;
- (void)handleSkipToLiveTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift28VideoBottomSegmentPlayerView_h */
