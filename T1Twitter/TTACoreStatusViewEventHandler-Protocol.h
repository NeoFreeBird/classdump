//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
