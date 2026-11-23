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
