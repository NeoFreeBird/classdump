//
#ifndef TAVAnalyticsEventWithScribeParameters_Protocol_h
#define TAVAnalyticsEventWithScribeParameters_Protocol_h
@import Foundation;

#include "TAVAnalyticsEventProtocol-Protocol.h"

@protocol TAVAnalyticsEventWithScribeParameters <TAVAnalyticsEventProtocol>

@required

/* required instance methods */
- (void)updateScribeParameters:(id)parameters;

@optional

@end

#endif /* TAVAnalyticsEventWithScribeParameters_Protocol_h */
