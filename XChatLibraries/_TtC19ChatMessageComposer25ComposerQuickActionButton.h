//
#ifndef _TtC19ChatMessageComposer25ComposerQuickActionButton_h
#define _TtC19ChatMessageComposer25ComposerQuickActionButton_h
@import Foundation;

@class ChatMessageComposer.MessageComposerAction ?, UIButton, _$sSSSg, _$sSo7UIImageCSg;

@interface ChatMessageComposer.ComposerQuickActionButton : UIButton { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? action;
    __C.UIImage? image;
    Swift.String? titleText;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)updateConfiguration;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer25ComposerQuickActionButton_h */
