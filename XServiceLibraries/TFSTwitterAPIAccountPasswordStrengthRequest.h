//
#ifndef TFSTwitterAPIAccountPasswordStrengthRequest_h
#define TFSTwitterAPIAccountPasswordStrengthRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountPasswordStrengthRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)supportedAuthenticationTypes;
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithPassword:(id)password name:(id)name screenName:(id)name email:(id)email context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountPasswordStrengthRequest_h */
