//
#ifndef T1AmplifyContentControlBar_h
#define T1AmplifyContentControlBar_h
@import Foundation;

#include "T1AmplifyContentControlBarDelegate-Protocol.h"
#include "T1AmplifyControlBar.h"
#include "T1MediaSlider.h"

@class UILabel;

@interface T1AmplifyContentControlBar : T1AmplifyControlBar

@property (nonatomic) double contentDuration;
@property (nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) UILabel *countUpLabel;
@property (readonly, nonatomic) UILabel *countDividerLabel;
@property (readonly, nonatomic) UILabel *durationLabel;
@property (readonly, nonatomic) T1MediaSlider *slider;
@property (weak, nonatomic) id <T1AmplifyContentControlBarDelegate> contentDelegate;

/* instance methods */
- (id)newBarLabel;
- (double)sliderTimeWithDuration:(double)duration;
- (void)updateWithCurrentPlaybackState:(id)state;
- (void)_scrubDidBegin;
- (void)_scrubDidChange;
- (void)_scrubDidEnd;
- (void)setupConstraints;

@end

#endif /* T1AmplifyContentControlBar_h */
