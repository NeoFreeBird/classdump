//
#ifndef _TtC7XSports21SportsHubAdBannerView_h
#define _TtC7XSports21SportsHubAdBannerView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsImageLoader ?, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsHubAdBannerView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    (() -> ())? onSelect;
    __C.UIImageView logoImageView;
    __C.UILabel titleLabel;
    __C.UIImageView chevronImageView;
    __C.UIView skeletonShape;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_skeletonView;
    XSports.SportsImageLoader ? logoLoader;
    Swift.Bool isLoading;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports21SportsHubAdBannerView_h */
