//
#ifndef _TtC20ChatAttachmentViewer17VideoControlsView_h
#define _TtC20ChatAttachmentViewer17VideoControlsView_h
@import Foundation;

@class ChatAttachmentViewer.PlayPauseHitButton, ChatAttachmentViewer.SeekBarView, ChatAttachmentViewer.VideoControlsViewDelegate ?, Swift.Bool, UIView, _$sSbSg, _$sSd, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface ChatAttachmentViewer.VideoControlsView : UIView { // (Swift)
    /* instance variables */
    ChatAttachmentViewer.VideoControlsViewDelegate ? delegate;
    ChatAttachmentViewer.PlayPauseHitButton playPauseButton;
    __C.UILabel remainingLabel;
    ChatAttachmentViewer.SeekBarView seekBar;
    __C.UIStackView stackView;
    Swift.Double duration;
    Swift.Bool isSeeking;
    Swift.Bool? renderedIsPlaying;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapPlayPause;

@end

#endif /* _TtC20ChatAttachmentViewer17VideoControlsView_h */
