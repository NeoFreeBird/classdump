//
#ifndef _TtC4DMUI20ConnectionStatusView_h
#define _TtC4DMUI20ConnectionStatusView_h
@import Foundation;

@class DMUI.ConnectionStatusViewState, UIControl, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface DMUI.ConnectionStatusView : UIControl { // (Swift)
    /* instance variables */
    DMUI.ConnectionStatusViewState statusViewState;
    __C.UIActivityIndicatorView activityIndicator;
    __C.UIImageView imageView;
    __C.UILabel titleLabel;
    __C.UIStackView stackView;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4DMUI20ConnectionStatusView_h */
