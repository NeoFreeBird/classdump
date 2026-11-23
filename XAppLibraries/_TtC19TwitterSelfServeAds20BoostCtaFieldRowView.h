//
#ifndef _TtC19TwitterSelfServeAds20BoostCtaFieldRowView_h
#define _TtC19TwitterSelfServeAds20BoostCtaFieldRowView_h
@import Foundation;

@class TwitterSelfServeAds.BoostCtaPreviewView, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface TwitterSelfServeAds.BoostCtaFieldRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UIView scalingView;
    __C.UILabel titleLabel;
    __C.UILabel valueLabel;
    __C.UIImageView chevronView;
    __C.UIStackView topRow;
    TwitterSelfServeAds.BoostCtaPreviewView previewView;
    __C.UIStackView contentStack;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;

@end

#endif /* _TtC19TwitterSelfServeAds20BoostCtaFieldRowView_h */
