//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
