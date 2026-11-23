//
#ifndef _TtC12XPhotoEditor16FramingImageView_h
#define _TtC12XPhotoEditor16FramingImageView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo6UIViewCSg, _$syycSg, __C.CGAffineTransform, __C.CGRect, __C.CGSize;

@interface XPhotoEditor.FramingImageView : UIView { // (Swift)
    /* instance variables */
    __C.UIView? $__lazy_storage_$_rotatedContentView;
    __C.UIImageView imageView;
    __C.CGAffineTransform storedTransform;
    __C.CGAffineTransform cachedTransform;
    __C.CGAffineTransform invertedTransformCache;
    __C.CGRect imageViewRect;
    __C.CGRect cropRect;
    (() -> ())? onTransformChanged;
    __C.CGSize minSize;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC12XPhotoEditor16FramingImageView_h */
