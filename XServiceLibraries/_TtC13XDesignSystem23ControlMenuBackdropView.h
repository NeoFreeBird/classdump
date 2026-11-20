//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem23ControlMenuBackdropView_h
#define _TtC13XDesignSystem23ControlMenuBackdropView_h
@import Foundation;

@class UIView, XDesignSystem.Blur, XDesignSystem.ControlMenu.Backdrop, _$sSo7CALayerC;

@interface XDesignSystem.ControlMenuBackdropView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.ControlMenu.Backdrop backdrop;
    XDesignSystem.Blur blur;
    __C.CALayer maskLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem23ControlMenuBackdropView_h */
