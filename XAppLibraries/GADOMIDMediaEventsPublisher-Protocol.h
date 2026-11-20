//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDMediaEventsPublisher_Protocol_h
#define GADOMIDMediaEventsPublisher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDMediaEventsPublisher <NSObject>

@required

/* required instance methods */
- (void)publishMediaEventWithName:(id)name parameters:(id)parameters;

@optional

@end

#endif /* GADOMIDMediaEventsPublisher_Protocol_h */
