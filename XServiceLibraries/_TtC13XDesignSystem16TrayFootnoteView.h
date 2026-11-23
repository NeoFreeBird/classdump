//
#ifndef _TtC13XDesignSystem16TrayFootnoteView_h
#define _TtC13XDesignSystem16TrayFootnoteView_h
@import Foundation;

@class UIView, _$sSa -> XDesignSystem.TrayFootnoteView.ActiveRange, _$sSo7UILabelC;

@interface XDesignSystem.TrayFootnoteView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    Swift.Array -> XDesignSystem.TrayFootnoteView.ActiveRange activeRanges;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem16TrayFootnoteView_h */
