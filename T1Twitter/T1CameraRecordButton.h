//
#ifndef T1CameraRecordButton_h
#define T1CameraRecordButton_h
@import Foundation;

@class UIControl;

@interface T1CameraRecordButton : UIControl { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *buttonState;
    NSNumber"16@0:8 *isBeingTracked;
    NSNumber"16@0:8 *ringView;
    NSNumber"16@0:8 *backCircleView;
    NSNumber"16@0:8 *backCircleBlurView;
    NSNumber"16@0:8 *redDotView;
    NSNumber"16@0:8 *lastBounds;
}

@property (nonatomic) _Bool requiresHoldDown;
@property (nonatomic) _Bool isRecording;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool highlighted;
@property (nonatomic) double touchTrackingDistance;

/* instance methods */
- (_Bool)isEnabled;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)isHighlighted;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1CameraRecordButton_h */
