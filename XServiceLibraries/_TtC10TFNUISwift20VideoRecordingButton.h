//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift20VideoRecordingButton_h
#define _TtC10TFNUISwift20VideoRecordingButton_h
@import Foundation;

@class Swift.Bool, TFNUISwift.VideoRecordingButtonIdleView, TFNUISwift.VideoRecordingButtonInnerIndicator, TFNUISwift.VideoRecordingButtonProgressRing, TFNUISwift.VideoRecordingButtonState, UIControl, XDesignSystem.Blur, _$sSd, _$sSdSg, _$sSo13UILayoutGuideC, _$sySb_SbtcSg, _$syycSg;

@interface TFNUISwift.VideoRecordingButton : UIControl { // (Swift)
    /* instance variables */
    Swift.Bool suppressStateDidSet;
    TFNUISwift.VideoRecordingButtonState recordingState;
    __C.UILayoutGuide idleRingLayoutGuide;
    Swift.Double longPressThreshold;
    (() -> ())? onPressBegan;
    ((Swift.Bool, Swift.Bool) -> ())? onPressEnded;
    Swift.Double? pressBeganTimestamp;
    TFNUISwift.VideoRecordingButtonIdleView idleView;
    XDesignSystem.Blur blurCircle;
    TFNUISwift.VideoRecordingButtonProgressRing progressRing;
    TFNUISwift.VideoRecordingButtonInnerIndicator innerIndicator;
    Swift.Bool isMorphAnimating;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (_Bool)accessibilityActivate;

@end

#endif /* _TtC10TFNUISwift20VideoRecordingButton_h */
