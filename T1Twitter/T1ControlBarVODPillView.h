//
#ifndef T1ControlBarVODPillView_h
#define T1ControlBarVODPillView_h
@import Foundation;

#include "T1TimeDurationPillView.h"

@class TAVControlBarItem;

@interface T1ControlBarVODPillView : TAVControlBarItem

@property (readonly, nonatomic) T1TimeDurationPillView *pillView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* T1ControlBarVODPillView_h */
