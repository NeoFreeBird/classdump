//
#ifndef _TtC13XDesignSystem16EmojiReactionBar_h
#define _TtC13XDesignSystem16EmojiReactionBar_h
@import Foundation;

@class UIView, _$sSa -> XDesignSystem.Button, _$sSa -> XDesignSystem.EmojiReactionBar.Item, _$sySScSg, _$syycSg;

@interface XDesignSystem.EmojiReactionBar : UIView { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelect;
    (() -> ())? onMore;
    Swift.Array -> XDesignSystem.EmojiReactionBar.Item items;
    Swift.Array -> XDesignSystem.Button buttons;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem16EmojiReactionBar_h */
