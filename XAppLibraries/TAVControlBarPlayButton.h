//
#ifndef TAVControlBarPlayButton_h
#define TAVControlBarPlayButton_h
@import Foundation;

#include "TAVControlBarItem.h"
#include "TAVPlaybackState.h"

@class UIButton;

@interface TAVControlBarPlayButton : TAVControlBarItem

@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) TAVPlaybackState *playbackState;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)private_update;
- (void)handleTap;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVControlBarPlayButton_h */
