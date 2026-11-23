//
#ifndef _TtC12XPhotoEditor17EditorPreviewView_h
#define _TtC12XPhotoEditor17EditorPreviewView_h
@import Foundation;

@class UIView, XPhotoEditor.EditorLivePreviewView ?, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, __C.UIEdgeInsets;

@interface XPhotoEditor.EditorPreviewView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    __C.CAShapeLayer imageMaskLayer;
    XPhotoEditor.EditorLivePreviewView ? $__lazy_storage_$_liveImageView;
    __C.CAShapeLayer borderLayer;
    __C.UIEdgeInsets contentInsets;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor17EditorPreviewView_h */
