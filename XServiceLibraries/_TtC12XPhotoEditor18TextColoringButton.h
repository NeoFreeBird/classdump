//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor18TextColoringButton_h
#define _TtC12XPhotoEditor18TextColoringButton_h
@import Foundation;

@class UIControl, _$sSo11UIImageViewC, _$syycSg;

@interface XPhotoEditor.TextColoringButton : UIControl { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UIImageView iconView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleTap;

@end

#endif /* _TtC12XPhotoEditor18TextColoringButton_h */
