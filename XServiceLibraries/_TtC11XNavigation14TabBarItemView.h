//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation14TabBarItemView_h
#define _TtC11XNavigation14TabBarItemView_h
@import Foundation;

@class UIView, XNavigation.TabBarItemView.Row, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XNavigation.TabBarItemView : UIView { // (Swift)
    /* instance variables */
    __C.UIView glyphContainer;
    __C.UIImageView imageView;
    __C.UILabel titleLabel;
    XNavigation.TabBarItemView.Row row;
    nominal type descriptor for CoreGraphics.CGFloat labelReveal;
    nominal type descriptor for CoreGraphics.CGFloat glyphScale;
    nominal type descriptor for CoreGraphics.CGFloat glyphRotation;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)accessibilityActivate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation14TabBarItemView_h */
