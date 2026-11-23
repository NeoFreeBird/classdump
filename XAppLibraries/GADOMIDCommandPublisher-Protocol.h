//
#ifndef GADOMIDCommandPublisher_Protocol_h
#define GADOMIDCommandPublisher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDCommandPublisher <NSObject>

@required

/* required instance methods */
- (void)publishCommand:(id)command;

@optional

@end

#endif /* GADOMIDCommandPublisher_Protocol_h */
