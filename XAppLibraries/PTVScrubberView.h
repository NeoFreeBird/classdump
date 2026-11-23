//
#ifndef PTVScrubberView_h
#define PTVScrubberView_h
@import Foundation;

@class NSArray, UIView;

@interface PTVScrubberView : UIView {
    /* instance variables */
    UIView *_startIndicator;
    UIView *_grayBar;
    UIView *_whiteBar;
    NSArray *_timeBars;
}

@property (nonatomic) double startTime;
@property (nonatomic) double totalDuration;
@property (nonatomic) double currentTime;
@property (nonatomic) double currentZoomFactor;

/* instance methods */
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)createTimeBars;

@end

#endif /* PTVScrubberView_h */
