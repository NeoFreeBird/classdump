//
#ifndef TFSTwitterAPITwoFactorAuthRemoveMethodRequest_h
#define TFSTwitterAPITwoFactorAuthRemoveMethodRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPITwoFactorAuthRemoveMethodRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithMethodID:(long long)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPITwoFactorAuthRemoveMethodRequest_h */
