//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor15FramingGridView_h
#define _TtC12XPhotoEditor15FramingGridView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, __C.CGRect;

@interface XPhotoEditor.FramingGridView : UIView { // (Swift)
    /* instance variables */
    __C.UIView topShadow;
    __C.UIView bottomShadow;
    __C.UIView leftShadow;
    __C.UIView rightShadow;
    __C.UIImageView topLeftCorner;
    __C.UIImageView topRightCorner;
    __C.UIImageView bottomLeftCorner;
    __C.UIImageView bottomRightCorner;
    __C.CGRect parentBounds;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC12XPhotoEditor15FramingGridView_h */
