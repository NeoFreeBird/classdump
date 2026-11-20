//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIPeriscopeAuthenticationTokenRequest_h
#define TFSTwitterAPIPeriscopeAuthenticationTokenRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIPeriscopeAuthenticationTokenRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIPeriscopeAuthenticationTokenRequest_h */
