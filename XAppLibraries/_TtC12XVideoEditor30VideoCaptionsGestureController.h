//
#ifndef _TtC12XVideoEditor30VideoCaptionsGestureController_h
#define _TtC12XVideoEditor30VideoCaptionsGestureController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, Swift.Bool, XVideoEditor.TranslationCenterGuide, XVideoEditor.VideoCaptionsGestureControllerDelegate ?, XVideoEditor.VideoCaptionsGestureTrackingViewProtocol _$s_So6UIViewCXcSgXw, XVideoEditor.VideoEdgeGuide, XVideoEditor.VideoEdgeToEdgeGuide, XVideoEditor.VideoRotationGuide, _$s10Foundation4DateVMn, _$s12CoreGraphics7CGFloatVMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn ?, _$s7Combine19CurrentValueSubjectCMn XVideoEditor.VideoCaptionsGesturePhase _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySh -> XVideoEditor.VideoCaptionsGestureGuide _$sG6guides_ XVideoEditor.VideoCaptionsGestureLayout layoutt _$ss5NeverOMn, _$sSh -> XVideoEditor.VideoCaptionsGestureGuide, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo22UIPanGestureRecognizerCSg, _$sSo24UIPinchGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo27UIRotationGestureRecognizerCSg, _$sSo29TweetBackgroundFrameProcessorC, _$sSo38TweetBackgroundFrameProcessorTransformCSg, _$sSo6UIViewCSg, __C.CGRect _$sSgSo38TweetBackgroundFrameProcessorTransformC_AAtcSg, __C.CGRect _$sSgSo38TweetBackgroundFrameProcessorTransformCcSg, __C.UIEdgeInsets, __C.UIEdgeInsets _$sSgycSg;

@interface XVideoEditor.VideoCaptionsGestureController : NSObject <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XVideoEditor.VideoCaptionsGestureControllerDelegate ? delegate;
    XVideoEditor.VideoCaptionsGestureTrackingViewProtocol _$s_So6UIViewCXcSgXw gestureTrackingView;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never ? setNeedsRedrawLastFrameSubject;
    __C.CGRect _$sSgSo38TweetBackgroundFrameProcessorTransformCcSg textureRectProvider;
    __C.CGRect _$sSgSo38TweetBackgroundFrameProcessorTransformC_AAtcSg guideRegionProvider;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never _gestureTrackingSubject;
    nominal type descriptor for Combine.CurrentValueSubject XVideoEditor.VideoCaptionsGesturePhase nominal type descriptor for Swift.Never _gesturePhaseSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Set -> XVideoEditor.VideoCaptionsGestureGuide _$sG6guides_ XVideoEditor.VideoCaptionsGestureLayout layoutt nominal type descriptor for Swift.Never _activeGuidesSubject;
    nominal type descriptor for CoreGraphics.CGFloat pinchZoomMinSize;
    nominal type descriptor for CoreGraphics.CGFloat pinchZoomMaxSizeCoef;
    Swift.Bool pinchScaleFollowsClamp;
    nominal type descriptor for CoreGraphics.CGFloat trackingEnlarge;
    Swift.Set -> XVideoEditor.VideoCaptionsGestureGuide guides;
    __C.UIEdgeInsets _$sSgycSg edgeGuidesInsetsProvider;
    __C.UIEdgeInsets horizontalVideoEdgeGuidesInsets;
    __C.UIEdgeInsets verticalVideoEdgeGuidesInsets;
    nominal type descriptor for CoreGraphics.CGFloat maxActivationVelocity;
    Swift.Bool _isPanGestureTracking;
    __C.TweetBackgroundFrameProcessor _tweetBackgroundProcessor;
    __C.TweetBackgroundFrameProcessorTransform? _currentTransform;
    __C.UIPanGestureRecognizer? _panGesture;
    __C.UIPinchGestureRecognizer? _pinchGesture;
    __C.UIRotationGestureRecognizer? _rotationGesture;
    __C.UIImpactFeedbackGenerator _hapticFeedbackGenerator;
    nominal type descriptor for Foundation.Date _lastHapticFeedbackDate;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    XVideoEditor.TranslationCenterGuide _guideCenterX;
    XVideoEditor.TranslationCenterGuide _guideCenterY;
    XVideoEditor.VideoEdgeGuide _guideEdgeTop;
    XVideoEditor.VideoEdgeGuide _guideEdgeLeft;
    XVideoEditor.VideoEdgeGuide _guideEdgeRight;
    XVideoEditor.VideoEdgeGuide _guideEdgeBottom;
    XVideoEditor.VideoEdgeToEdgeGuide _guideEdgeToEdgeX;
    XVideoEditor.VideoEdgeToEdgeGuide _guideEdgeToEdgeY;
    XVideoEditor.VideoRotationGuide _guideRotation;
    nominal type descriptor for CoreGraphics.CGFloat _gestureRotation;
    Swift.Bool highlightedViewEnabled;
    Swift.Bool _highlightedViewHidden;
    __C.UIView? _highlightedView;
}

/* instance methods */
- (void)trackPanGesture:(id)gesture;
- (void)trackPinchGesture:(id)gesture;
- (void)trackRotationGesture:(id)gesture;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_handlePan:(id)pan;
- (void)_handlePinch:(id)pinch;
- (void)_handleRotation:(id)rotation;
- (id)init;

@end

#endif /* _TtC12XVideoEditor30VideoCaptionsGestureController_h */
