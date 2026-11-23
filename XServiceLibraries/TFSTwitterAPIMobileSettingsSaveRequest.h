//
#ifndef TFSTwitterAPIMobileSettingsSaveRequest_h
#define TFSTwitterAPIMobileSettingsSaveRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMobileSettingsSaveRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithAppID:(long long)id userID:(long long)id udid:(id)udid environment:(long long)environment osVersion:(id)version pushTemplateChecksum:(id)checksum base64PushToken:(id)token pushProtocolVersion:(unsigned long long)version pushSettings:(id)settings context:(id)context responseModelBuilder:(id)builder;
- (id)initWithAppID:(long long)id userID:(long long)id udid:(id)udid environment:(long long)environment osVersion:(id)version smsTemplateChecksum:(id)checksum smsSettings:(id)settings context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMobileSettingsSaveRequest_h */
