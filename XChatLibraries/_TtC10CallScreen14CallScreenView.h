//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallScreen14CallScreenView_h
#define _TtC10CallScreen14CallScreenView_h
@import Foundation;

@class CallScreen.CallCaptureNoticeView, CallScreen.CallReactionOverlayView, CallScreen.CallReactionPickerView, CallUI.CallActionButton, CallUI.CallParticipantGridView, CallUI.CallPassthroughView, CallUI.CallScreenShareFullScreenButton, CallUI.CallScreenShareOrientation, CallUI.CallScreenShareView, Swift.Bool, UIView, _$sSa -> CallUI.CallActionButton, _$sSi, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sySbcSg;

@interface CallScreen.CallScreenView : UIView { // (Swift)
    /* instance variables */
    CallUI.CallParticipantGridView gridView;
    CallUI.CallScreenShareView screenShareView;
    CallUI.CallScreenShareFullScreenButton screenShareFullScreenButton;
    CallUI.CallPassthroughView chromeView;
    CallUI.CallActionButton cameraButton;
    CallUI.CallActionButton microphoneButton;
    CallUI.CallActionButton reactionsButton;
    CallScreen.CallReactionPickerView reactionPickerView;
    CallScreen.CallReactionOverlayView reactionOverlayView;
    ((Swift.Bool) -> ())? reactionPickerVisibilityDidChange;
    CallUI.CallActionButton moreButton;
    CallUI.CallActionButton endCallButton;
    __C.UIView contentContainerView;
    CallUI.CallScreenShareOrientation screenShareOrientation;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UIImageView subtitleIconView;
    __C.UILabel captureNoticeSeparatorLabel;
    CallScreen.CallCaptureNoticeView captureNoticeView;
    Swift.Bool isScreenShareFullScreen;
    Swift.Bool isScreenShareVisible;
    Swift.Int focalTileCount;
    Swift.Bool isMoreButtonVisible;
    Swift.Bool isReactionsButtonVisible;
    Swift.Bool isReactionPickerVisible;
    Swift.Bool isImmersive;
    Swift.Array -> CallUI.CallActionButton leadingTopBarButtons;
    Swift.Array -> CallUI.CallActionButton trailingTopBarButtons;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10CallScreen14CallScreenView_h */
