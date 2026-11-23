//
#ifndef PTVCircularProgressBar_h
#define PTVCircularProgressBar_h
@import Foundation;

@class CAShapeLayer, NSDate, NSTimer, UIBezierPath, UILabel, UIView;

@interface PTVCircularProgressBar : UIView

@property (retain, nonatomic) UILabel *countdownLabel;
@property (nonatomic) _Bool shouldScaleCountdownLabelUp;
@property (retain, nonatomic) NSTimer *countdownLabelTransformTimer;
@property (retain, nonatomic) CAShapeLayer *progressShapeLayer;
@property (readonly, nonatomic) UIBezierPath *circularPath;
@property (readonly, nonatomic) double lineWidth;
@property (retain, nonatomic) NSDate *endDate;

/* instance methods */
- (id)initWithLineWidth:(double)width countdownLabelFontSize:(double)size;
- (void)dealloc;
- (void)startProgressBarWithEndDate:(id)date;
- (void)reset;
- (void)clearTimersAndAnimations;
- (void)updateCountdownLabel;
- (void)updateCountdownTransformIfNeeded;
- (void)updateCountdownLabelTransform;

@end

#endif /* PTVCircularProgressBar_h */
