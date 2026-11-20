//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer17ComposerVoiceView_h
#define _TtC19ChatMessageComposer17ComposerVoiceView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatMessageComposer.ComposerVoicePlayPauseButton, ChatMessageComposer.MessageComposerVoiceState ?, ChatMessageComposer.MessageComposerVoiceViewModel ?, ChatUI.AudioWaveformView, UIView, _$sSo7UILabelC;

@interface ChatMessageComposer.ComposerVoiceView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerVoiceViewModel ? viewModel;
    ChatMessageComposer.MessageComposerVoiceState ? state;
    ChatUI.AudioWaveformView audioWaveView;
    __C.UILabel durationLabel;
    ChatMessageComposer.ComposerVoicePlayPauseButton playPauseButton;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTapWaveform:(id)waveform;
- (void)didPanWaveform:(id)waveform;

@end

#endif /* _TtC19ChatMessageComposer17ComposerVoiceView_h */
