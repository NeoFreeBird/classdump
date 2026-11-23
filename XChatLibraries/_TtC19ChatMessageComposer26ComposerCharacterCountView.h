//
#ifndef _TtC19ChatMessageComposer26ComposerCharacterCountView_h
#define _TtC19ChatMessageComposer26ComposerCharacterCountView_h
@import Foundation;

@class ChatMessageComposer.MessageComposerCharacterCountViewModel ?, UIView, _$sSo7UILabelC;

@interface ChatMessageComposer.ComposerCharacterCountView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerCharacterCountViewModel ? viewModel;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer26ComposerCharacterCountView_h */
