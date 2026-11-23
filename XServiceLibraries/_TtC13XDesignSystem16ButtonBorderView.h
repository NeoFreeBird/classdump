//
#ifndef _TtC13XDesignSystem16ButtonBorderView_h
#define _TtC13XDesignSystem16ButtonBorderView_h
@import Foundation;

@class UIView, XDesignSystem.Button.Border ?;

@interface XDesignSystem.ButtonBorderView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.Button.Border ? border;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC13XDesignSystem16ButtonBorderView_h */
