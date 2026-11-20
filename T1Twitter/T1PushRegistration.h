//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
