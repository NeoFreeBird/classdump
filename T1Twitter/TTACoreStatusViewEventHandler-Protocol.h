//
#ifndef TTACoreStatusViewEventHandler_Protocol_h
#define TTACoreStatusViewEventHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusViewEventHandler <NSObject>

@required

/* required instance methods */
- (id)handleStatusViewEvent:(id)event;
- (id)handleStatusViewEvent:(id)event;

@optional

@end

#endif /* TTACoreStatusViewEventHandler_Protocol_h */
