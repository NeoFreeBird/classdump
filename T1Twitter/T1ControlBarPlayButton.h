//
#ifndef T1ControlBarPlayButton_h
#define T1ControlBarPlayButton_h
@import Foundation;

#include "T1ControlBarPlayButtonDelegate-Protocol.h"

@class TAVControlBarItem, TAVPlaybackState, TFNPaddedButton, UIImage;

@interface T1ControlBarPlayButton : TAVControlBarItem

@property (retain, nonatomic) TFNPaddedButton *button;
@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) TAVPlaybackState *playbackState;
@property (weak, nonatomic) id <T1ControlBarPlayButtonDelegate> delegate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)t1_updateButtonState;
- (void)_t1_didTapPlayButton;

@end

#endif /* T1ControlBarPlayButton_h */
