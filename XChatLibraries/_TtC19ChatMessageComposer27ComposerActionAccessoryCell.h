//
#ifndef _TtC19ChatMessageComposer27ComposerActionAccessoryCell_h
#define _TtC19ChatMessageComposer27ComposerActionAccessoryCell_h
@import Foundation;

@class ChatMessageComposer.ComposerActionAccessoryButton ?, ChatMessageComposer.LongPressPanGestureRecognizer ?, ChatMessageComposer.MessageComposerAction ?, ChatUI.ChatColorProviding ?, UICollectionViewCell;

@interface ChatMessageComposer.ComposerActionAccessoryCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? action;
    ChatUI.ChatColorProviding ? colorProvider;
    ChatMessageComposer.ComposerActionAccessoryButton ? $__lazy_storage_$_actionButton;
    ChatMessageComposer.LongPressPanGestureRecognizer ? $__lazy_storage_$_longPressPanGestureRecognizer;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)didPress:(id)press;

@end

#endif /* _TtC19ChatMessageComposer27ComposerActionAccessoryCell_h */
