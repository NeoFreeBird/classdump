//
#ifndef _TtC9GlassDock19DockBadgeDetailView_h
#define _TtC9GlassDock19DockBadgeDetailView_h
@import Foundation;

@class GlassDock.DockBadgeView, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC;

@interface GlassDock.DockBadgeDetailView : UIView { // (Swift)
    /* instance variables */
    GlassDock.DockBadgeView badge;
    __C.UILabel detailLabel;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock19DockBadgeDetailView_h */
