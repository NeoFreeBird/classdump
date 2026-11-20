//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NetworkTrafficMappingServicePollingTaskDelegate_Protocol_h
#define T1NetworkTrafficMappingServicePollingTaskDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NetworkTrafficMappingServicePollingTaskDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)pollingTaskShouldBeginNewPoll:(id)poll;
- (void)pollingTask:(id)task didPollWithRecommendationsResult:(id)result error:(id)error;

@optional

@end

#endif /* T1NetworkTrafficMappingServicePollingTaskDelegate_Protocol_h */
