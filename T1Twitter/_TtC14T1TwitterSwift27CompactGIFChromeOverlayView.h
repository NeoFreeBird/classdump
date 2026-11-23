//
#ifndef _TtC14T1TwitterSwift27CompactGIFChromeOverlayView_h
#define _TtC14T1TwitterSwift27CompactGIFChromeOverlayView_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ControlsPassthroughView, UIView, _$s5TAVUI18PlaybackAttachmentMp _$s_So21TAVPlaybackObservablep, _$s5TAVUI19VideoImageComponentCMn, _$s5TAVUI19VideoLabelComponentCMn ?, _$s5TAVUI22MediaViewStyleProviderMp, _$sSo13TAVPlayerViewCSgXw, _$sSo6UIViewC;

@interface T1TwitterSwift.CompactGIFChromeOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.UIView videoContainerView;
    weak __C.TAVPlayerView? playerView;
    protocol descriptor for TAVUI.PlaybackAttachment _$s_So21TAVPlaybackObservablep playbackObservableAttachment;
    protocol descriptor for TAVUI.MediaViewStyleProvider styleProvider;
    nominal type descriptor for TAVUI.VideoImageComponent previewImageComponent;
    Swift.Bool previewCoversPlayer;
    T1TwitterSwift.ControlsPassthroughView controlsContainer;
    nominal type descriptor for TAVUI.VideoLabelComponent ? gifIconComponent;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27CompactGIFChromeOverlayView_h */
