//
#ifndef TFSTwitterAPIMediaMetadataCreateRequest_h
#define TFSTwitterAPIMediaMetadataCreateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMediaMetadataCreateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithMediaID:(id)id mediaMetadata:(id)metadata context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMediaMetadataCreateRequest_h */
