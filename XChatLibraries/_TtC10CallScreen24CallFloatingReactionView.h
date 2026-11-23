//
#ifndef _TtC10CallScreen24CallFloatingReactionView_h
#define _TtC10CallScreen24CallFloatingReactionView_h
@import Foundation;

@class UIView, _$s13XDesignSystem4BlurCMn, _$sSo6UIViewC, _$sSo7UILabelC;

@interface CallScreen.CallFloatingReactionView : UIView { // (Swift)
    /* instance variables */
    __C.UIView swayView;
    __C.UIView popView;
    __C.UILabel emojiLabel;
    nominal type descriptor for XDesignSystem.Blur nameBlur;
    __C.UILabel nameLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10CallScreen24CallFloatingReactionView_h */
