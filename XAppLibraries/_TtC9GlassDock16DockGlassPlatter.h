//
#ifndef _TtC9GlassDock16DockGlassPlatter_h
#define _TtC9GlassDock16DockGlassPlatter_h
@import Foundation;

@class UIView, _$s13XDesignSystem5GlassCMn, _$sSo6UIViewC;

@interface GlassDock.DockGlassPlatter : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIView vibrantContentView;
    __C.UIView backdropContentView;
    nominal type descriptor for XDesignSystem.Glass glass;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock16DockGlassPlatter_h */
