//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVReplayWorkerDelegate_Protocol_h
#define PTVReplayWorkerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReplayWorkerDelegate <NSObject>

@required

/* required instance methods */
- (void)processHistoryArray:(id)array;
- (void)error:(id)error;

@optional

@end

#endif /* PTVReplayWorkerDelegate_Protocol_h */
