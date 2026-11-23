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
