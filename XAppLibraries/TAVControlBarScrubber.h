//
#ifndef TAVControlBarScrubber_h
#define TAVControlBarScrubber_h
@import Foundation;

#include "TAVControlBarItem.h"
#include "TAVPlaybackState.h"

@class UISlider;

@interface TAVControlBarScrubber : TAVControlBarItem

@property (retain, nonatomic) TAVPlaybackState *lastPlaybackState;
@property (retain, nonatomic) UISlider *slider;

/* instance methods */
- (id)initWithIdentifier:(id)identifier slider:(id)slider;
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)private_scrub:(id)private_scrub;
- (void)private_scrubDidEnd:(id)end;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVControlBarScrubber_h */
