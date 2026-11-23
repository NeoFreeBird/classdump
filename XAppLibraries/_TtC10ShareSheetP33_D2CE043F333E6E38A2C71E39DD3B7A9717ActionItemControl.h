//
#ifndef _TtC10ShareSheetP33_D2CE043F333E6E38A2C71E39DD3B7A9717ActionItemControl_h
#define _TtC10ShareSheetP33_D2CE043F333E6E38A2C71E39DD3B7A9717ActionItemControl_h
@import Foundation;

@class UIControl;

@interface ShareSheet.(ActionItemControl in _D2CE043F333E6E38A2C71E39DD3B7A97) : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 itemWidth;
    @40@0:8:16@24@32 action;
    @40@0:8:16@24@32 didTap;
    @40@0:8:16@24@32 circleView;
    @40@0:8:16@24@32 label;
    @40@0:8:16@24@32 shareLinkIndicator;
    @40@0:8:16@24@32 $__lazy_storage_$_labelWidthConstraint;
    @40@0:8:16@24@32 isAwaitingShareLink;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isHighlighted;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10ShareSheetP33_D2CE043F333E6E38A2C71E39DD3B7A9717ActionItemControl_h */
