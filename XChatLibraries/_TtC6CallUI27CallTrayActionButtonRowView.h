//
#ifndef _TtC6CallUI27CallTrayActionButtonRowView_h
#define _TtC6CallUI27CallTrayActionButtonRowView_h
@import Foundation;

@class UIView, _$sSa -> CallUI.CallTrayActionButton;

@interface CallUI.CallTrayActionButtonRowView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> CallUI.CallTrayActionButton buttons;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6CallUI27CallTrayActionButtonRowView_h */
