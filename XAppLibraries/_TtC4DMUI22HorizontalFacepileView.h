//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMUI22HorizontalFacepileView_h
#define _TtC4DMUI22HorizontalFacepileView_h
@import Foundation;

@class DMUI.HorizontalFacepileConfiguration, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> DMUI.CircularCutoutView, _$sSa -> DMUI.HorizontalFacepileItem;

@interface DMUI.HorizontalFacepileView : UIView { // (Swift)
    /* instance variables */
    DMUI.HorizontalFacepileConfiguration configuration;
    Swift.Array -> DMUI.HorizontalFacepileItem items;
    nominal type descriptor for CoreGraphics.CGFloat spacing;
    Swift.Bool isHighlighted;
    Swift.Array -> DMUI.CircularCutoutView circularCutoutViews;
}

@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4DMUI22HorizontalFacepileView_h */
