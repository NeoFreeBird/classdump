//
#ifndef _TtC5TAVUI17ButtonOverlayView_h
#define _TtC5TAVUI17ButtonOverlayView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo6UIViewC, _$sSo8UIButtonC;

@interface TAVUI.ButtonOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView previewImageView;
    __C.UIView shadedOverlayView;
    __C.UIStackView buttonsStackView;
    __C.UIButton primaryOverlayButton;
    __C.UIButton secondaryOverlayButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC5TAVUI17ButtonOverlayView_h */
