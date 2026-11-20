//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIStratostoreTwoFactorAuthSettingsRequest_h
#define TFSTwitterAPIStratostoreTwoFactorAuthSettingsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIStratostoreTwoFactorAuthSettingsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(long long)id context:(id)context responseModelBuilder:(id)builder shouldUseNewEndpoint:(_Bool)endpoint;

@end

#endif /* TFSTwitterAPIStratostoreTwoFactorAuthSettingsRequest_h */
