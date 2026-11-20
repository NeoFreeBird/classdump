//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIMobileSettingsCheckinRequest_h
#define TFSTwitterAPIMobileSettingsCheckinRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMobileSettingsCheckinRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithAppID:(long long)id userID:(long long)id pushTemplateChecksum:(id)checksum base64PushToken:(id)token tokenType:(id)type pushSettings:(id)settings udid:(id)udid environment:(long long)environment osVersion:(id)version pushProtocolVersion:(unsigned long long)version context:(id)context responseModelBuilder:(id)builder;
- (id)initWithAppID:(long long)id userID:(long long)id udid:(id)udid environment:(long long)environment osVersion:(id)version smsTemplateChecksum:(id)checksum smsSettings:(id)settings context:(id)context responseModelBuilder:(id)builder;
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* TFSTwitterAPIMobileSettingsCheckinRequest_h */
