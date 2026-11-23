//
#ifndef _TtC11XNavigation22NavigationBarTitleView_h
#define _TtC11XNavigation22NavigationBarTitleView_h
@import Foundation;

@class Swift.Bool, UIView, XNavigation.NavigationBarMetrics.Typography, XNavigation.NavigationBarTitle, _$sSa -> _$s10Foundation21NSKeyValueObservationCMn, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XNavigation.NavigationBarTitleView : UIView { // (Swift)
    /* instance variables */
    XNavigation.NavigationBarTitle title;
    __C.UIView contentView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    Swift.Array -> nominal type descriptor for Foundation.NSKeyValueObservation hostedSizeObservations;
    Swift.Bool isPlacingHostedView;
    XNavigation.NavigationBarMetrics.Typography typography;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation22NavigationBarTitleView_h */
