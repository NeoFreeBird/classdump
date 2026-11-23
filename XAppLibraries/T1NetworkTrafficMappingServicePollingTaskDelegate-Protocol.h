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
