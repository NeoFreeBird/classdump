//
#ifndef TFSTwitterAPIUsersEmailAvailableRequest_h
#define TFSTwitterAPIUsersEmailAvailableRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIUsersEmailAvailableRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithEmail:(id)email context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIUsersEmailAvailableRequest_h */
