//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem10LiquidLens_h
#define _TtC13XDesignSystem10LiquidLens_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.LiquidLens.Material, _$sSo6UIViewC;

@interface XDesignSystem.LiquidLens : UIView { // (Swift)
    /* instance variables */
    __C.UIView restingFace;
    XDesignSystem.LiquidLens.Material material;
    __C.UIView liftProgressView;
    Swift.Bool isLifted;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem10LiquidLens_h */
