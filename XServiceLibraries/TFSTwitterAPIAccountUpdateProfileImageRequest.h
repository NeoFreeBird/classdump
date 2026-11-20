//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountUpdateProfileImageRequest_h
#define TFSTwitterAPIAccountUpdateProfileImageRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountUpdateProfileImageRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (_Bool)isMultipartFormPostRequest;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithImageData:(id)data imageFileName:(id)name originalMediaHash:(id)hash context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountUpdateProfileImageRequest_h */
