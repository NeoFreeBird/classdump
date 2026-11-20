//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok30GrokSearchSummaryTableViewCell_h
#define _TtC4Grok30GrokSearchSummaryTableViewCell_h
@import Foundation;

@class Grok.GrokSearchSummaryViewModel ?, Swift.Bool, TFNTableViewCell, _$s10Foundation21NSKeyValueObservationCMn ?, _$s10TFNUISwift20TFNHostingControllerCMn ?, _$sSo6UIViewC;

@interface Grok.GrokSearchSummaryTableViewCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    Grok.GrokSearchSummaryViewModel ? viewModel;
    nominal type descriptor for TFNUISwift.TFNHostingController ? textHostingController;
    nominal type descriptor for TFNUISwift.TFNHostingController ? buttonHostingController;
    nominal type descriptor for Foundation.NSKeyValueObservation ? scrollObservation;
    Swift.Bool isScrollEffectSuspended;
    Swift.Bool exceedsCollapsibleHeight;
    __C.UIView scrollEffectContainer;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)didDisplayInDataViewController:(id)controller atIndexPath:(id)path visibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didEndDisplayingInDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;

@end

#endif /* _TtC4Grok30GrokSearchSummaryTableViewCell_h */
