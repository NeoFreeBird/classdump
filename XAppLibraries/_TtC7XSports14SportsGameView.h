//
#ifndef _TtC7XSports14SportsGameView_h
#define _TtC7XSports14SportsGameView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.SportsGameHeroType ?, XSports.SportsGameSegmentAccessory ?, XSports.SportsGameSegmentScrollBehavior, XSports.SportsGameSheetStage ?, XSports.SportsGameSheetStage _$sSg_AAtcSg ->, XSports.SportsGameView.TrayPosition ?, XSports.SportsGameView.UserTravel ?, XSports.SportsSegmentBarView ?, XSports.TraySpring, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$s13XDesignSystem16SheetSurfaceViewCMn, _$sSo12UIScrollViewCSg, _$sSo13CADisplayLinkCSg, _$sSo22UIPanGestureRecognizerC, _$sSo6UIViewCSg, __C.UIEdgeInsets;

@interface XSports.SportsGameView : XSports.MeasurableView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onMinimizeProgressChanged;
    XSports.SportsGameSheetStage _$sSg_AAtcSg -> onUserTrayDrag;
    nominal type descriptor for XDesignSystem.SheetSurfaceView sheetSurfaceView;
    __C.UIPanGestureRecognizer trayPan;
    XSports.TraySpring spring;
    XSports.SportsGameHeroType ? hero;
    XSports.SportsSegmentBarView ? segmentBarView;
    __C.UIView? segmentContentView;
    XSports.SportsGameSegmentAccessory ? segmentAccessory;
    __C.UIScrollView? segmentScrollView;
    Swift.Bool segmentRestsAtBottom;
    XSports.SportsGameSegmentScrollBehavior segmentScrollBehavior;
    nominal type descriptor for Foundation.NSKeyValueObservation ? segmentScrollObservation;
    nominal type descriptor for CoreGraphics.CGFloat previousSegmentOffset;
    Swift.Bool isPinningSegmentOffset;
    __C.CADisplayLink? contentSettleLink;
    nominal type descriptor for CoreGraphics.CGFloat trayOffset;
    nominal type descriptor for CoreGraphics.CGFloat dragStartTrayOffset;
    Swift.Bool showsSecondaryBand;
    __C.UIEdgeInsets measuredOcclusionBandInsets;
    Swift.Bool floatsTray;
    XSports.SportsGameSheetStage ? pendingStage;
    XSports.SportsGameSheetStage ? restingStage;
    XSports.SportsGameSheetStage ? springStage;
    XSports.SportsGameView.UserTravel ? userTravel;
    XSports.SportsGameView.TrayPosition ? keyboardTrayPosition;
    nominal type descriptor for CoreGraphics.CGFloat lastReportedMinimizeProgress;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)safeAreaInsetsDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleTrayPan:(id)pan;
- (void)handleSegmentPan:(id)pan;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports14SportsGameView_h */
