//
#ifndef _TtC19ChatMessageComposer21ControlMenuActionCell_h
#define _TtC19ChatMessageComposer21ControlMenuActionCell_h
@import Foundation;

@class ChatMessageComposer.ControlMenuActionView, UICollectionViewCell;

@interface ChatMessageComposer.ControlMenuActionCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatMessageComposer.ControlMenuActionView actionView;
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

#endif /* _TtC19ChatMessageComposer21ControlMenuActionCell_h */
