//
#ifndef _TtC6ChatUI26MessageAttachmentAudioView_h
#define _TtC6ChatUI26MessageAttachmentAudioView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatModels.AudioAttachment ?, ChatModels.AudioPlaybackStream ?, ChatModels.ChatMessageItemBubbleStyle, ChatUI.AttachmentLoadingIndicatorView, ChatUI.AudioWaveformCanvasView, ChatUI.ChatColorProviding ?, Swift.Bool, UIView, _$s10Foundation3URLVMn ?, _$s13XDesignSystem6ButtonCMn ?, _$sSSSg, _$sSaySdG, _$sSd, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIImageViewC, _$sSo22UIPanGestureRecognizerCSg, _$sSo7UILabelC;

@interface ChatUI.MessageAttachmentAudioView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatUI.ChatColorProviding ? colorProvider;
    ChatModels.AudioAttachment ? audioAttachment;
    [Swift.Double] audioLevels;
    ChatModels.AudioPlaybackStream ? audioPlaybackStream;
    ChatModels.ChatMessageItemBubbleStyle bubbleStyle;
    nominal type descriptor for Foundation.URL ? currentFileURL;
    Swift.Bool isPlaying;
    Swift.String? messageID;
    Swift.Double playbackProgress;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.UIPanGestureRecognizer? waveformPanGesture;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_playPauseButton;
    ChatUI.AudioWaveformCanvasView waveformView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    __C.UIImageView errorIconView;
    __C.UIImageView downloadIconView;
    __C.UILabel durationLabel;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didPanWaveform:(id)waveform;

@end

#endif /* _TtC6ChatUI26MessageAttachmentAudioView_h */
