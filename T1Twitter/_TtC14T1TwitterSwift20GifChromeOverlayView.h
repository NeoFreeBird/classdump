//
#ifndef _TtC14T1TwitterSwift20GifChromeOverlayView_h
#define _TtC14T1TwitterSwift20GifChromeOverlayView_h
@import Foundation;

@class T1TwitterSwift.ControlsPassthroughView, T1TwitterSwift.InlineVideoView.ViewModel, UIView, _$s5TAVUI18PlaybackAttachmentMp _$s_So21TAVPlaybackObservablep, _$s5TAVUI19VideoImageComponentCMn, _$s5TAVUI19VideoLabelComponentCMn, _$s5TAVUI20VideoButtonComponentCMn ?, _$s5TAVUI20VideoChromeComponentCMn T1TwitterSwift.MediaAttributionPillView ?, _$s5TAVUI22MediaViewStyleProviderMp, _$s5TAVUI25LoadingIndicatorComponentCMn, _$sSo13TAVPlayerViewCSgXw, _$sSo6UIViewC;

@interface T1TwitterSwift.GifChromeOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.UIView videoContainerView;
    weak __C.TAVPlayerView? playerView;
    protocol descriptor for TAVUI.PlaybackAttachment _$s_So21TAVPlaybackObservablep playbackObservableAttachment;
    protocol descriptor for TAVUI.MediaViewStyleProvider styleProvider;
    nominal type descriptor for TAVUI.VideoImageComponent previewImageComponent;
    nominal type descriptor for TAVUI.VideoButtonComponent ? playButtonComponent;
    nominal type descriptor for TAVUI.LoadingIndicatorComponent loadingIndicatorComponent;
    T1TwitterSwift.ControlsPassthroughView controlsContainer;
    nominal type descriptor for TAVUI.VideoLabelComponent gifIconComponent;
    nominal type descriptor for TAVUI.VideoButtonComponent ? altTextIconComponent;
    nominal type descriptor for TAVUI.VideoChromeComponent T1TwitterSwift.MediaAttributionPillView ? attributionPillComponent;
    T1TwitterSwift.InlineVideoView.ViewModel viewModel;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift20GifChromeOverlayView_h */
