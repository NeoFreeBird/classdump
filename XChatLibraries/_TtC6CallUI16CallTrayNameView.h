//
#ifndef _TtC6CallUI16CallTrayNameView_h
#define _TtC6CallUI16CallTrayNameView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface CallUI.CallTrayNameView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel nameLabel;
    __C.UIImageView badgeView;
    __C.UILabel handleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC6CallUI16CallTrayNameView_h */
