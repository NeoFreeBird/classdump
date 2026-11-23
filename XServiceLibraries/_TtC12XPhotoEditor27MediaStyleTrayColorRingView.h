//
#ifndef _TtC12XPhotoEditor27MediaStyleTrayColorRingView_h
#define _TtC12XPhotoEditor27MediaStyleTrayColorRingView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo6UIViewC;

@interface XPhotoEditor.MediaStyleTrayColorRingView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool isSelected;
    __C.UIView _selectionRingView;
    __C.UIView _contrastRingView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC12XPhotoEditor27MediaStyleTrayColorRingView_h */
