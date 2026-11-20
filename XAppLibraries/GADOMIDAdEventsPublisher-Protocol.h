//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDAdEventsPublisher_Protocol_h
#define GADOMIDAdEventsPublisher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDAdEventsPublisher <NSObject>

@required

/* required instance methods */
- (void)publishImpressionEvent;
- (void)publishLoadedEvent;
- (void)publishLoadedEventWithVastProperties:(id)properties;

@optional

@end

#endif /* GADOMIDAdEventsPublisher_Protocol_h */
