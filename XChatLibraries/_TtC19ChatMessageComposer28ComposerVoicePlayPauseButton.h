//
#ifndef _TtC19ChatMessageComposer28ComposerVoicePlayPauseButton_h
#define _TtC19ChatMessageComposer28ComposerVoicePlayPauseButton_h
@import Foundation;

@class ChatMessageComposer.MessageComposerAction ?, ChatUI.PlayPauseMorphView, UIButton;

@interface ChatMessageComposer.ComposerVoicePlayPauseButton : UIButton { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? action;
    ChatUI.PlayPauseMorphView morphView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC19ChatMessageComposer28ComposerVoicePlayPauseButton_h */
