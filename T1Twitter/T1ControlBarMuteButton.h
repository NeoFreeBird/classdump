//
#ifndef T1ControlBarMuteButton_h
#define T1ControlBarMuteButton_h
@import Foundation;

#include "T1ControlBarMuteButtonDelegate-Protocol.h"

@class TAVControlBarItem, TFNPaddedButton, UIImage;

@interface T1ControlBarMuteButton : TAVControlBarItem

@property (retain, nonatomic) TFNPaddedButton *button;
@property (retain, nonatomic) UIImage *muteImage;
@property (retain, nonatomic) UIImage *unmuteImage;
@property (weak, nonatomic) id <T1ControlBarMuteButtonDelegate> delegate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)t1_updateButtonState;
- (void)_t1_didTapMuteButton;

@end

#endif /* T1ControlBarMuteButton_h */
