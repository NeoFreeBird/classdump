//
#ifndef TFSTwitterAPIGuestActivateRequest_h
#define TFSTwitterAPIGuestActivateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIGuestActivateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIGuestActivateRequest_h */
