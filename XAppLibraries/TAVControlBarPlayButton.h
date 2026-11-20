//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
