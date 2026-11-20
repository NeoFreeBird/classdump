//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSBackgroundTaskHandleDelegate_Protocol_h
#define TFSBackgroundTaskHandleDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSBackgroundTaskHandleDelegate <NSObject>

@required

/* required instance methods */
- (void)backgroundTaskHandleWillBeDeallocated:(id)deallocated;

@optional

@end

#endif /* TFSBackgroundTaskHandleDelegate_Protocol_h */
