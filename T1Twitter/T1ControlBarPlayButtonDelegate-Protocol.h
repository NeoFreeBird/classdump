//
#ifndef T1ControlBarPlayButtonDelegate_Protocol_h
#define T1ControlBarPlayButtonDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ControlBarPlayButtonDelegate <NSObject>

@required

/* required instance methods */
- (void)controlBarPlayButton:(id)button didTapToPlay:(_Bool)play;

@optional

@end

#endif /* T1ControlBarPlayButtonDelegate_Protocol_h */
