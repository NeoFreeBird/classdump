//
#ifndef T1PushRegistration_h
#define T1PushRegistration_h
@import Foundation;

#include "T1PushRegistration-Protocol.h"

@class NSObject, NSString;

@interface T1PushRegistration : NSObject <T1PushRegistration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)registerPushRoutes;

@end

#endif /* T1PushRegistration_h */
