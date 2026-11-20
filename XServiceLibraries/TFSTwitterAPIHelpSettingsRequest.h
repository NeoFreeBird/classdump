//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIHelpSettingsRequest_h
#define TFSTwitterAPIHelpSettingsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIHelpSettingsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithSettingsVersion:(id)version featureSetToken:(id)token context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIHelpSettingsRequest_h */
