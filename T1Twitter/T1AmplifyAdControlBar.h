//
#ifndef T1AmplifyAdControlBar_h
#define T1AmplifyAdControlBar_h
@import Foundation;

#include "T1AmplifyControlBar.h"
#include "T1DynamicVideoAdViewModel.h"
#include "T1TimeDurationPillView.h"
#include "T1VideoAdButton.h"
#include "T1VideoSkipCountdownLabel.h"
#include "_TtC14T1TwitterSwift24T1AmplifyAdControlBarPIP.h"

@class TAVPlayerView, TFNTwitterAccount;

@interface T1AmplifyAdControlBar : T1AmplifyControlBar

@property (nonatomic) double countDownValue;
@property (readonly, nonatomic) T1TimeDurationPillView *durationPillView;
@property (readonly, nonatomic) T1VideoAdButton *skipAdButton;
@property (retain, nonatomic) T1VideoSkipCountdownLabel *skipCountdownLabel;
@property (retain, nonatomic) T1DynamicVideoAdViewModel *adViewModel;
@property (nonatomic) _Bool shouldRenderAdByAdvertiser;
@property (weak, nonatomic) TAVPlayerView *tavPlayerView;
@property (retain, nonatomic) T1TwitterSwift.T1AmplifyAdControlBarPIP *adPIP;
@property (readonly, weak, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithTAVPlayerView:(id)view tavPlayer:(id)player account:(id)account mediaInfo:(id)info;
- (void)_skipAdButtonTap:(id)tap event:(id)event;
- (void)updateWithCurrentPlaybackState:(id)state;
- (void)_showSkipButtonWithCurrentPlaybackTime:(double)time duration:(double)duration;
- (void)_updateSkipCountDownLabelWithCurrentPlaybackTime:(double)time;
- (void)setupConstraints;
- (_Bool)_shouldShowPIPStyleAdChrome;
- (void)dealloc;

@end

#endif /* T1AmplifyAdControlBar_h */
