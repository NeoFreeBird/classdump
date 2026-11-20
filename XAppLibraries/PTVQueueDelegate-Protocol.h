//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVQueueDelegate_Protocol_h
#define PTVQueueDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVQueueDelegate <NSObject>

@required

/* required instance methods */
- (void)rejected:(int)rejected;

@optional

@end

#endif /* PTVQueueDelegate_Protocol_h */
