//
#ifndef _TtC19ChatMessageComposer21ControlMenuActionView_h
#define _TtC19ChatMessageComposer21ControlMenuActionView_h
@import Foundation;

@class ChatMessageComposer.ControlMenuAction ?, Swift.Bool, UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatMessageComposer.ControlMenuActionView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.ControlMenuAction ? action;
    Swift.Bool isHighlighted;
    __C.UIView highlightView;
    __C.UIView iconBackgroundView;
    __C.UIImageView iconImageView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer21ControlMenuActionView_h */
