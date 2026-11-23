//
#ifndef T1PushRegistration_Protocol_h
#define T1PushRegistration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PushRegistration <NSObject>

@required

/* required instance methods */
- (void)registerPushRoutes;

@optional

@end

#endif /* T1PushRegistration_Protocol_h */
