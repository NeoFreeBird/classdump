//
#ifndef _TtC10ChatNumber19ChatNumberDigitView_h
#define _TtC10ChatNumber19ChatNumberDigitView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSJ, _$sSo6UIFontC, _$sSo7UILabelC;

@interface ChatNumber.ChatNumberDigitView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel outgoingLabel;
    __C.UILabel incomingLabel;
    Swift.Bool isRolling;
    Swift.Character digit;
    __C.UIFont font;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10ChatNumber19ChatNumberDigitView_h */
