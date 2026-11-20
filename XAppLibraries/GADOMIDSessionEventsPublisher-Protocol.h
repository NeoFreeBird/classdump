//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDSessionEventsPublisher_Protocol_h
#define GADOMIDSessionEventsPublisher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDSessionEventsPublisher <NSObject>

@required

/* required instance methods */
- (void)publishInitWithConfiguration:(id)configuration;
- (void)publishStartEventWithJSONContext:(id)jsoncontext verificationParameters:(id)parameters injectedResources:(id)resources;
- (void)publishErrorWithType:(unsigned long long)type errorMessage:(id)message;
- (void)publishFinishEvent;

@optional

@end

#endif /* GADOMIDSessionEventsPublisher_Protocol_h */
