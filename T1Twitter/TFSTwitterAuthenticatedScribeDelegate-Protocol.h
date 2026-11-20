//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAuthenticatedScribeDelegate_Protocol_h
#define TFSTwitterAuthenticatedScribeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAuthenticatedScribeDelegate <NSObject>

@required

/* required instance methods */
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event duration:(double)duration;

@optional

@end

#endif /* TFSTwitterAuthenticatedScribeDelegate_Protocol_h */
