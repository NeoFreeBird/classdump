//
#ifndef _TtC12XPhotoEditor15CollageSlotView_h
#define _TtC12XPhotoEditor15CollageSlotView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, UIView, XPhotoEditor.CollageSlotRemoveButton, XPhotoEditor.FramingGestureHandler, XPhotoEditor.FramingImageView, _$sSo11UIImageViewC, _$sSo23UIActivityIndicatorViewC, _$sSo7UIImageCSg, _$syycSg, __C.CGRect;

@interface XPhotoEditor.CollageSlotView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onEmptyTap;
    (() -> ())? onRemove;
    __C.UIImage? image;
    Swift.Bool isLoading;
    XPhotoEditor.FramingImageView framingImageView;
    XPhotoEditor.FramingGestureHandler gestureHandler;
    __C.UIImageView addIconView;
    __C.UIActivityIndicatorView loadingIndicator;
    XPhotoEditor.CollageSlotRemoveButton removeButton;
    Swift.Bool needsInitialFit;
    __C.CGRect lastImageViewRect;
    __C.CGRect lastCropRect;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)tapped;
- (void)removeTapped;

@end

#endif /* _TtC12XPhotoEditor15CollageSlotView_h */
