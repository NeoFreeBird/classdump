//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUAnyPolicyBackoffSignaler_h
#define TNUAnyPolicyBackoffSignaler_h
@import Foundation;

#include "TNLBackoffSignaler-Protocol.h"

@class NSObject, NSString;

@interface TNUAnyPolicyBackoffSignaler : NSObject <TNLBackoffSignaler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)tnl_shouldSignalBackoffForURL:(id)url host:(id)host statusCode:(long long)code responseHeaders:(id)headers;

@end

#endif /* TNUAnyPolicyBackoffSignaler_h */
