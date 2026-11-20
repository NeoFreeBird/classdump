//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPITonBucketPostRequest_h
#define TFSTwitterAPITonBucketPostRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@class NSString;

@interface TFSTwitterAPITonBucketPostRequest : TFSTwitterAPIEndpointRequest

@property (readonly, copy, nonatomic) NSString *bucket;

/* class methods */
+ (unsigned long long)baseURLType;
+ (long long)HTTPMethodValue;
+ (id)requestBodyContentType;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (Class)responseClass;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithBucket:(id)bucket contentType:(id)type data:(id)data path:(id)path expiresDateString:(id)string context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPITonBucketPostRequest_h */
