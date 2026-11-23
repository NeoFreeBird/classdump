//
#ifndef _TtC9XArticles24ArticleSummaryHeaderView_h
#define _TtC9XArticles24ArticleSummaryHeaderView_h
@import Foundation;

@class UIControl, XArticles.ArticleSummaryHeaderView.Accessory, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XArticles.ArticleSummaryHeaderView : UIControl { // (Swift)
    /* instance variables */
    XArticles.ArticleSummaryHeaderView.Accessory accessory;
    __C.UIStackView stackView;
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
    __C.UIView accessoryContainerView;
    __C.UIImageView chevronView;
    __C.UIActivityIndicatorView activityIndicator;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XArticles24ArticleSummaryHeaderView_h */
