//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
