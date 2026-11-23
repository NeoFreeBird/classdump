//
#ifndef _TtC11ChatGrokBot24GrokBotCardHeaderRowView_h
#define _TtC11ChatGrokBot24GrokBotCardHeaderRowView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCardHeaderRowView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UIView accessoryView;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot24GrokBotCardHeaderRowView_h */
