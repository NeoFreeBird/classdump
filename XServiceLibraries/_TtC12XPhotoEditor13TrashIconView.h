//
#ifndef _TtC12XPhotoEditor13TrashIconView_h
#define _TtC12XPhotoEditor13TrashIconView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo11UIImageViewC;

@interface XPhotoEditor.TrashIconView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView lidImageView;
    __C.UIImageView binImageView;
    Swift.Bool isOpen;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor13TrashIconView_h */
