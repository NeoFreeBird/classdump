//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNJumpBackToHomeTimelineBehavior_Protocol_h
#define TFNJumpBackToHomeTimelineBehavior_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNJumpBackToHomeTimelineBehavior <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)allowsJumpBackToHomeTimeline;

@end

#endif /* TFNJumpBackToHomeTimelineBehavior_Protocol_h */
