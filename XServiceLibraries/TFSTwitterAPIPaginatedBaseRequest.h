//
#ifndef TFSTwitterAPIPaginatedBaseRequest_h
#define TFSTwitterAPIPaginatedBaseRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIPaginatedBaseRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithCursor:(id)cursor additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIPaginatedBaseRequest_h */
