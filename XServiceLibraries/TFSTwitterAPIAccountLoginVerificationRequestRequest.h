//
#ifndef TFSTwitterAPIAccountLoginVerificationRequestRequest_h
#define TFSTwitterAPIAccountLoginVerificationRequestRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountLoginVerificationRequestRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationRequestRequest_h */
