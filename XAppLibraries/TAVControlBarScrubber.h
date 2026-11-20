//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
