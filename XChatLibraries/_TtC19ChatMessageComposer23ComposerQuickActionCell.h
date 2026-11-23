//
#ifndef _TtC19ChatMessageComposer23ComposerQuickActionCell_h
#define _TtC19ChatMessageComposer23ComposerQuickActionCell_h
@import Foundation;

@class ChatMessageComposer.ComposerQuickActionButton, ChatMessageComposer.MessageComposerAction ?, UICollectionViewCell;

@interface ChatMessageComposer.ComposerQuickActionCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? action;
    ChatMessageComposer.ComposerQuickActionButton quickActionButton;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
- (void)prepareForReuse;

@end

#endif /* _TtC19ChatMessageComposer23ComposerQuickActionCell_h */
