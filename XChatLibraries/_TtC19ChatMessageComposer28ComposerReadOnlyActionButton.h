//
#ifndef _TtC19ChatMessageComposer28ComposerReadOnlyActionButton_h
#define _TtC19ChatMessageComposer28ComposerReadOnlyActionButton_h
@import Foundation;

@class ChatMessageComposer.MessageComposerReadOnlyActionViewModel ?, UIButton;

@interface ChatMessageComposer.ComposerReadOnlyActionButton : UIButton { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerReadOnlyActionViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)updateConfiguration;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer28ComposerReadOnlyActionButton_h */
