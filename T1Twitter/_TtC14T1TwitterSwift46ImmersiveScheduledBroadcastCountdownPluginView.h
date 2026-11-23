//
#ifndef _TtC14T1TwitterSwift46ImmersiveScheduledBroadcastCountdownPluginView_h
#define _TtC14T1TwitterSwift46ImmersiveScheduledBroadcastCountdownPluginView_h
@import Foundation;

#include "XDSButtonLayoutDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ImmersiveBroadcastCardViewModel ?, T1TwitterSwift.ImmersiveDisplayMode, T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView.CountdownUnitView ?, UIView, _$s10Foundation4DateVMn ?, _$s13XDesignSystem6ButtonCMn ?, _$sSSSg, _$sSaySo22UIViewPropertyAnimatorCG, _$sSaySo6UIViewCGSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7NSTimerCSg, _$sSo7UILabelCSg, __C.CGRect;

@interface T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView : UIView <XDSButtonLayoutDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveBroadcastCardViewModel ? viewModel;
    __C.CGRect posterFrame;
    __C.CGRect shareButtonFrame;
    __C.NSTimer? countdownTimer;
    nominal type descriptor for Foundation.Date ? lastBroadcastRefreshDate;
    Swift.String? appliedDateString;
    Swift.Bool isSettingReminder;
    Swift.Bool isShowingStartingSoon;
    T1TwitterSwift.ImmersiveDisplayMode displayMode;
    [__C.UIViewPropertyAnimator] morphAnimators;
    __C.UIImpactFeedbackGenerator morphHaptic;
    __C.UIView countdownRevealView;
    T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView.CountdownUnitView ? $__lazy_storage_$_daysUnitView;
    T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView.CountdownUnitView ? $__lazy_storage_$_hoursUnitView;
    T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView.CountdownUnitView ? $__lazy_storage_$_minutesUnitView;
    T1TwitterSwift.ImmersiveScheduledBroadcastCountdownPluginView.CountdownUnitView ? $__lazy_storage_$_secondsUnitView;
    [__C.UIView]? $__lazy_storage_$_countdownItemViews;
    __C.UILabel? $__lazy_storage_$_startingSoonLabel;
    __C.UIView? $__lazy_storage_$_countdownPillView;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_reminderButton;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_datePillButton;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_shareButton;
}

/* instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)shareButtonTapped;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)reminderButtonTapped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift46ImmersiveScheduledBroadcastCountdownPluginView_h */
