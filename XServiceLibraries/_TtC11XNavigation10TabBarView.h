//
#ifndef _TtC11XNavigation10TabBarView_h
#define _TtC11XNavigation10TabBarView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UILargeContentViewerInteractionDelegate-Protocol.h"
#include "UIPointerInteractionDelegate-Protocol.h"

@class Swift.Bool, UIView, XDesignSystem.Blur.ContentEffect ?, XDesignSystem.Glass, XNavigation.DisplayLinkDriver ?, XNavigation.TabBarBadgeOverlay, XNavigation.TabBarBadgeOverlay ?, XNavigation.TabBarCarriedRow ?, XNavigation.TabBarCollapse, XNavigation.TabBarFlex, XNavigation.TabBarPill, XNavigation.TabBarPill.DrawnShape ?, XNavigation.TabBarPortalView ?, XNavigation.TabBarView.Interaction ?, XNavigation.TabBarView.TouchOrigin ?, XNavigation.VerticalTabBarGeometry ?, XNavigation.VerticalTabBarPressStage _$scSg ->, _$s12CoreGraphics7CGFloatVMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSa -> XNavigation.TabBarController.Tab, _$sSa -> XNavigation.TabBarItemView, _$sSd, _$sSi, _$sSo20UIPointerInteractionCSg, _$sSo31UILargeContentViewerInteractionCSg, _$sSo6UIViewC, _$syyc, __C.CGPoint, __C.CGRect ?;

@interface XNavigation.TabBarView : UIView <UIPointerInteractionDelegate, UILargeContentViewerInteractionDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    Swift.Array -> XNavigation.TabBarController.Tab tabs;
    XNavigation.TabBarController.TabIdentifier function type (escaping) onTap;
    XNavigation.TabBarController.TabIdentifier function type (escaping) onLongPress;
    () -> () onCollapsedActivate;
    __C.UIView platterContainer;
    __C.UIView uprightPlatterHost;
    XDesignSystem.Glass platter;
    XNavigation.TabBarPill pill;
    XNavigation.TabBarFlex flex;
    __C.UIView itemRow;
    XDesignSystem.Blur.ContentEffect ? $__lazy_storage_$_itemRowBlur;
    XNavigation.TabBarBadgeOverlay badgeOverlay;
    XNavigation.TabBarBadgeOverlay ? carriedBadgeOverlay;
    Swift.Array -> XNavigation.TabBarItemView itemViews;
    XNavigation.TabBarPortalView ? portalView;
    Swift.Array -> XNavigation.TabBarItemView portalItemViews;
    XNavigation.TabBarCarriedRow ? carriedRow;
    Swift.Array -> XNavigation.TabBarItemView carriedItemViews;
    XNavigation.DisplayLinkDriver ? portalWindowDriver;
    Swift.Bool hasPendingPortalWindow;
    Swift.Double portalIdleDeadline;
    XNavigation.TabBarPill.DrawnShape ? drawnPortalShape;
    nominal type descriptor for CoreGraphics.CGFloat drawnPortalOpacity;
    __C.CGRect ? drawnPlatterClip;
    __C.CGRect ? drawnPortalBounds;
    Swift.Int selectedIndex;
    XNavigation.TabBarView.Interaction ? interaction;
    __C.CGPoint pillRestCenter;
    XNavigation.TabBarCollapse appliedCollapse;
    XNavigation.TabBarView.TouchOrigin ? touchOrigin;
    Swift.Bool isBeginningVerticalTabBarPress;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingLongPress;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingVerticalTabBarReveal;
    __C.UILargeContentViewerInteraction? $__lazy_storage_$_largeContentViewerInteraction;
    __C.UIPointerInteraction? $__lazy_storage_$_pointerInteraction;
    XNavigation.VerticalTabBarGeometry ? verticalTabBarGeometry;
    Swift.Bool drawsVerticalTabBarCountsAsDots;
    XNavigation.VerticalTabBarPressStage _$scSg -> onVerticalTabBarPressChange;
    nominal type descriptor for CoreGraphics.CGFloat verticalTabBarGlyphRotation;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)pointerInteraction:(id)interaction regionForRequest:(id)request defaultRegion:(id)region;
- (id)pointerInteraction:(id)interaction styleForRegion:(id)region;
- (id)largeContentViewerInteraction:(id)interaction itemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveEvent:(id)event;
- (_Bool)accessibilityActivate;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleSecondaryClick:(id)click;
- (void)handleTracking:(id)tracking;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigation10TabBarView_h */
