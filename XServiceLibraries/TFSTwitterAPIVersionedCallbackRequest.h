//
#ifndef TFSTwitterAPIVersionedCallbackRequest_h
#define TFSTwitterAPIVersionedCallbackRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIVersionedCallbackRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithEndpointPath:(id)path context:(id)context;

@end

#endif /* TFSTwitterAPIVersionedCallbackRequest_h */
