//
#ifndef T1AmplifyControlBar_h
#define T1AmplifyControlBar_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class TAVPlaybackState, TAVPlayer, UIButton, UIView;

@interface T1AmplifyControlBar : UIView <TAVPlaybackObserver>

@property (retain, nonatomic) TAVPlaybackState *playbackState;
@property (nonatomic) _Bool separatorHidden;
@property (readonly, weak, nonatomic) TAVPlayer *tavPlayer;
@property (readonly, nonatomic) UIButton *playButton;
@property (readonly, nonatomic) double preferredHeight;

/* instance methods */
- (id)initWithTAVPlayer:(id)tavplayer;
- (void)_playButtonDidTap;
- (void)updateWithCurrentPlaybackState:(id)state;
- (void)setupConstraints;
- (void)private_updatePlayPauseButton;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (_Bool)isSeparatorHidden;

@end

#endif /* T1AmplifyControlBar_h */
