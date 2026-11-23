//
#ifndef _TtC5TAVUI12AdHeaderView_h
#define _TtC5TAVUI12AdHeaderView_h
@import Foundation;

@class TAVUI.AdHeaderView.DisplayContext, UIView, _$sSD -> __C.Key Any, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo22UITapGestureRecognizerC, _$sSo6UIViewC, _$sSo7UILabelC, _$syyc;

@interface TAVUI.AdHeaderView : UIView { // (Swift)
    /* instance variables */
    Swift.Dictionary -> __C.Key Any advertiserNameTextAttributes;
    Swift.Dictionary -> __C.Key Any ctaTextAttributes;
    __C.UIView imageBorderView;
    __C.UILabel advertiserNameLabel;
    __C.UIImageView advertiserAvatarImageView;
    __C.UIStackView stackView;
    () -> () didTap;
    __C.UITapGestureRecognizer tapGestureRecognizer;
    TAVUI.AdHeaderView.DisplayContext displayContext;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)dealloc;
- (void)didTapCTA;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC5TAVUI12AdHeaderView_h */
