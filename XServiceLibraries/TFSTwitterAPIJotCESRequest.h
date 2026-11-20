//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIJotCESRequest_h
#define TFSTwitterAPIJotCESRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIJotCESRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)requestBodyContentType;
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;
+ (long long)expectedRequestAnatomy;
+ (id)acceptContentType;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithData:(id)data context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIJotCESRequest_h */
