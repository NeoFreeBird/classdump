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
