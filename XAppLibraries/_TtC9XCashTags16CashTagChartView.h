//
#ifndef _TtC9XCashTags16CashTagChartView_h
#define _TtC9XCashTags16CashTagChartView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, UIView, XCashTags.CashTagAttachmentCustomTimeframeData ?, XCashTags.CashTagAttachmentFooterView ??, XCashTags.CashTagChartControlsView ?, XCashTags.CashTagChartErrorOrEmptyMode ?, XCashTags.CashTagChartErrorOrEmptyView ?, XCashTags.CashTagChartInspectActivation, XCashTags.CashTagChartQuery ?, XCashTags.CashTagChartStyle ?, XCashTags.CashTagChartViewDelegate ?, XCashTags.CashTagViewDisplayStyle, XCashTags.PassthroughOverlayView ?, XCashTags.TouchTrackingGestureRecognizer ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSD -> XCashTags.CashTagChartQuery XCashTags.CashTagChartSeries, _$sSD -> XCashTags.CashTagChartSegmentKey XCashTags.CashTagChartSegmentRenderer, _$sSa -> XCashTags.CashTagRenderedSegment, _$sSa -> _$s12CoreGraphics7CGFloatVMn xPosition_Si9dataIndext, _$sSa -> __C.CGColor, _$sSbSg, _$sSdSg, _$sSh -> XCashTags.CashTagChartQuery, _$sShySOG, _$sSi, _$sSiSg, _$sSo11UIStackViewCSg, _$sSo12CAShapeLayerCSg, _$sSo18NSLayoutConstraintCSg, _$sSo22UIPanGestureRecognizerCSg, _$sSo23UIActivityIndicatorViewCSg, _$sSo28UILongPressGestureRecognizerCSg, _$sSo6UIViewCSg, _$sSo7CALayerCSg, _$sSo7UILabelCSg, __C.CGColor, __C.CGRect;

@interface XCashTags.CashTagChartView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XCashTags.CashTagChartViewDelegate ? delegate;
    Swift.Dictionary -> XCashTags.CashTagChartQuery XCashTags.CashTagChartSeries seriesCache;
    __C.CGColor currentNormalStrokeColor;
    Swift.Array -> __C.CGColor currentGradientColors;
    __C.CGColor previousNormalStrokeColor;
    Swift.Array -> __C.CGColor previousGradientColors;
    Swift.Array -> nominal type descriptor for CoreGraphics.CGFloat xPosition_Si9dataIndext visibleCandleLayout;
    XCashTags.CashTagChartQuery ? previousChartQuery;
    XCashTags.CashTagChartStyle ? previousChartStyle;
    Swift.Bool isLoading;
    XCashTags.CashTagChartErrorOrEmptyMode ? fallbackMode;
    Swift.Bool isInspecting;
    Swift.Bool isAnimatingLoadingToData;
    Swift.Bool isAnimatingInspectDisappearance;
    Swift.Bool hasAnimatedInspectAppearance;
    Swift.Bool isReferenceDotVisible;
    Swift.Bool endDotVisible;
    Swift.Array -> XCashTags.CashTagRenderedSegment renderedSegments;
    nominal type descriptor for CoreGraphics.CGFloat ? inspectProgress;
    nominal type descriptor for CoreGraphics.CGFloat ? referenceInspectProgress;
    Swift.Int resampleCount;
    __C.CGRect lastLinePathBounds;
    Swift.Set<Swift.ObjectIdentifier> activeInspectGestureRecognizers;
    Swift.Int? lastInspectedCandleIndex;
    Swift.Bool? lastInspectWasAfterHours;
    Swift.Bool? lastReferenceInspectWasAfterHours;
    Swift.Bool? lastInspectWasEmpty;
    Swift.Bool? lastFingersCrossed;
    Swift.Bool? lastInspectWasAboveLastClose;
    Swift.Double? lastClosePrice;
    Swift.Double? lastLinePercentChange;
    Swift.Bool supportsCandleCharts;
    Swift.Set -> XCashTags.CashTagChartQuery receivedQueries;
    Swift.Set -> XCashTags.CashTagChartQuery expectedQueries;
    Swift.Set -> XCashTags.CashTagChartQuery retryingQueries;
    Swift.Bool hasReceivedInitialData;
    __C.UIView? $__lazy_storage_$_chartContainerView;
    __C.UIView? $__lazy_storage_$_volumeContainerView;
    XCashTags.CashTagChartControlsView ? $__lazy_storage_$_controlsView;
    __C.UIView? $__lazy_storage_$_timeframeContainerView;
    __C.UIView? $__lazy_storage_$_timestampContainerView;
    __C.UILabel? $__lazy_storage_$_timestampLabel;
    __C.NSLayoutConstraint? timestampCenterXConstraint;
    __C.NSLayoutConstraint? inspectOverlayBottomToVolume;
    __C.NSLayoutConstraint? inspectOverlayBottomToChart;
    __C.NSLayoutConstraint? errorOrEmptyViewBottomToVolume;
    __C.NSLayoutConstraint? errorOrEmptyViewBottomToChart;
    __C.NSLayoutConstraint? $__lazy_storage_$_chartAreaHeightConstraint;
    __C.UIActivityIndicatorView? $__lazy_storage_$_activityIndicator;
    XCashTags.CashTagChartErrorOrEmptyView ? $__lazy_storage_$_errorOrEmptyView;
    __C.UIStackView? $__lazy_storage_$_containerStack;
    XCashTags.PassthroughOverlayView ? $__lazy_storage_$_inspectOverlayView;
    Swift.Dictionary -> XCashTags.CashTagChartSegmentKey XCashTags.CashTagChartSegmentRenderer segmentRenderers;
    __C.CALayer? $__lazy_storage_$_gradientsContainerLayer;
    __C.CALayer? $__lazy_storage_$_segmentLinesContainerLayer;
    __C.CAShapeLayer? $__lazy_storage_$_inspectLineLayer;
    __C.CAShapeLayer? $__lazy_storage_$_referenceInspectLineLayer;
    __C.CAShapeLayer? $__lazy_storage_$_inspectDotLayer;
    __C.CAShapeLayer? $__lazy_storage_$_referenceInspectDotLayer;
    __C.CAShapeLayer? $__lazy_storage_$_dimEndDotExclusionMaskLayer;
    __C.CAShapeLayer? $__lazy_storage_$_lastCloseLineLayer;
    __C.CAShapeLayer? $__lazy_storage_$_endDotLayer;
    __C.CAShapeLayer? $__lazy_storage_$_upCandleLayer;
    __C.CAShapeLayer? $__lazy_storage_$_downCandleLayer;
    __C.CAShapeLayer? $__lazy_storage_$_volumeBarLayer;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_panGestureRecognizer;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_longPressGestureRecognizer;
    __C.UILongPressGestureRecognizer? $__lazy_storage_$_twoFingerLongPressGestureRecognizer;
    XCashTags.TouchTrackingGestureRecognizer ? $__lazy_storage_$_touchTrackingGestureRecognizer;
    nominal type descriptor for CoreGraphics.CGFloat chartAreaHeight;
    Swift.Bool isChartAreaHeightChangePending;
    XCashTags.CashTagViewDisplayStyle displayStyle;
    Swift.Bool isActive;
    XCashTags.CashTagChartInspectActivation inspectActivation;
    XCashTags.CashTagAttachmentCustomTimeframeData ? customTimeframeData;
    XCashTags.CashTagAttachmentFooterView ?? $__lazy_storage_$_attachmentFooterView;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handlePanGesture:(id)gesture;
- (void)handleLongPressGesture:(id)gesture;
- (void)handleTouchTrackingGesture:(id)gesture;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)applicationWillEnterForeground;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags16CashTagChartView_h */
