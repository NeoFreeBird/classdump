//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9GlassDock13DockBadgeView_h
#define _TtC9GlassDock13DockBadgeView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo7UILabelC;

@interface GlassDock.DockBadgeView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    nominal type descriptor for CoreGraphics.CGFloat horizontalInset;
    nominal type descriptor for CoreGraphics.CGFloat verticalInset;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock13DockBadgeView_h */
