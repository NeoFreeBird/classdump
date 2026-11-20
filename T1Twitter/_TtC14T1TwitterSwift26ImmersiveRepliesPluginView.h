//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26ImmersiveRepliesPluginView_h
#define _TtC14T1TwitterSwift26ImmersiveRepliesPluginView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveBroadcastCardViewModel.LiveChatAvailability ?, T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveDisplayMode, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$s13XDesignSystem16SheetSurfaceViewCMn, _$sSaySo16UIViewControllerCGSg, _$sSiSg, _$sSo15CAGradientLayerC, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo22UIPanGestureRecognizerC, _$sSo6UIViewC, __C.CGPoint ?;

@interface T1TwitterSwift.ImmersiveRepliesPluginView : UIView <TFNUISwift.LegacySegmentedViewControllerDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersiveCardState ? state;
    nominal type descriptor for XDesignSystem.SheetSurfaceView sheetSurfaceView;
    weak __C.UIViewController? container;
    [__C.UIViewController]? broadcastPagingControllerEntries;
    Swift.Int? chatTabIndex;
    T1TwitterSwift.ImmersiveBroadcastCardViewModel.LiveChatAvailability ? containerLiveChatAvailability;
    Swift.Bool containerShowsRepliesOnly;
    __C.UIView topGradientView;
    __C.CAGradientLayer topGradientLayer;
    __C.UIView tabBarDividerView;
    __C.UIPanGestureRecognizer panGestureRecognizer;
    __C.CGPoint ? panGestureStartPoint;
    T1TwitterSwift.ImmersiveDisplayMode stateAtStartOfDrag;
    Swift.Bool hasScheduledAutoOpenReplies;
    Swift.Bool didPauseFocalVideoForInlineUnmute;
    Swift.Bool usesForcedGlassNavigationBar;
}

/* instance methods */
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (void)segmentedViewController:(id)controller mayBeginDisplayingPageAt:(long long)at viewController:(id)controller;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)handlePan:(id)pan;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift26ImmersiveRepliesPluginView_h */
