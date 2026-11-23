//
#ifndef _TtC6ChatUI12PlayIconView_h
#define _TtC6ChatUI12PlayIconView_h
@import Foundation;

@class ChatUI.PlayIconView.Style, UIView, _$sSo11UIImageViewC, __C.CGSize;

@interface ChatUI.PlayIconView : UIView { // (Swift)
    /* instance variables */
    __C.CGSize size;
    ChatUI.PlayIconView.Style style;
    __C.UIImageView imageView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC6ChatUI12PlayIconView_h */
