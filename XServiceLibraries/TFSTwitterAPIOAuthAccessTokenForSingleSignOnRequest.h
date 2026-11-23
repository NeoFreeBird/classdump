//
#ifndef TFSTwitterAPIOAuthAccessTokenForSingleSignOnRequest_h
#define TFSTwitterAPIOAuthAccessTokenForSingleSignOnRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIOAuthAccessTokenForSingleSignOnRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithConsumerKey:(id)key authParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIOAuthAccessTokenForSingleSignOnRequest_h */
