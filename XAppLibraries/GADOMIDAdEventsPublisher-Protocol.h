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
