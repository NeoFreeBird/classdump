//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13QuickComposer18SystemGlassPlatter_h
#define _TtC13QuickComposer18SystemGlassPlatter_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem5GlassCMn, _$sSo6UIViewC;

@interface QuickComposer.SystemGlassPlatter : UIView { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIView vibrantContentView;
    Swift.Bool respondsToPress;
    nominal type descriptor for CoreGraphics.CGFloat cornerRadius;
    nominal type descriptor for XDesignSystem.Glass glass;
    Swift.Bool usesTunedStyle;
    __C.UIView interiorCoverView;
    __C.UIView shadowView;
    __C.UIView strokeView;
    Swift.Bool isEmphasized;
    Swift.Bool isDormant;
    Swift.Bool isEditing;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13QuickComposer18SystemGlassPlatter_h */
