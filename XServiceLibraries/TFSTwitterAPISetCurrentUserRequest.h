//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPISetCurrentUserRequest_h
#define TFSTwitterAPISetCurrentUserRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPISetCurrentUserRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithBase64PushToken:(id)token context:(id)context;

@end

#endif /* TFSTwitterAPISetCurrentUserRequest_h */
