//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports30SportsGameStatsLoadingCardView_h
#define _TtC7XSports30SportsGameStatsLoadingCardView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.SportsGameStatsLoadingCardView.Content, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSaySo6UIViewC6avatar_AB7leadingAB8trailingtG, _$sSo6UIViewC;

@interface XSports.SportsGameStatsLoadingCardView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.UIView skeletonView;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_shimmerView;
    __C.UIView titleShape;
    [(avatar: __C.UIView, leading: __C.UIView, trailing: __C.UIView)] rowShapes;
    XSports.SportsGameStatsLoadingCardView.Content content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC7XSports30SportsGameStatsLoadingCardView_h */
