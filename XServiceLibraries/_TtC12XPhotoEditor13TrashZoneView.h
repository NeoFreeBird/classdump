//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor13TrashZoneView_h
#define _TtC12XPhotoEditor13TrashZoneView_h
@import Foundation;

@class UIView, XPhotoEditor.TrashIconView, XPhotoEditor.TrashZoneState, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewC, _$sSo7UIColorC;

@interface XPhotoEditor.TrashZoneView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.TrashZoneState state;
    XPhotoEditor.TrashIconView trashIconView;
    __C.UIView clippingView;
    __C.UIColor defaultBorderColor;
    __C.UIColor defaultIconColor;
    __C.UIColor openColor;
    nominal type descriptor for CoreGraphics.CGFloat trashImageScale;
    nominal type descriptor for CoreGraphics.CGFloat proximityRadius;
    nominal type descriptor for CoreGraphics.CGFloat openRadius;
    nominal type descriptor for CoreGraphics.CGFloat proximityIconScale;
    nominal type descriptor for CoreGraphics.CGFloat openIconScale;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor13TrashZoneView_h */
