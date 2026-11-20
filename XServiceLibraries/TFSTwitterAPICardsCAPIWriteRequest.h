//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICardsCAPIWriteRequest_h
#define TFSTwitterAPICardsCAPIWriteRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPICardsCAPIWriteRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)baseURLType;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithCAPIEndpointPath:(id)path parameters:(id)parameters headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPICardsCAPIWriteRequest_h */
