//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIAccountSettingsPostRequest_h
#define TFSTwitterAPIAccountSettingsPostRequest_h
@import Foundation;

#include "TFSTwitterAPIAccountSettingsRequest.h"

@interface TFSTwitterAPIAccountSettingsPostRequest : TFSTwitterAPIAccountSettingsRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithExtraParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithSettings:(id)settings context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountSettingsPostRequest_h */
