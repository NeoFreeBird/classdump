//
#ifndef TFSTwitterAPIMobileSettingsLogoutRequest_h
#define TFSTwitterAPIMobileSettingsLogoutRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMobileSettingsLogoutRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithAppID:(long long)id userID:(long long)id base64PushToken:(id)token udid:(id)udid environment:(long long)environment context:(id)context responseModelBuilder:(id)builder;
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* TFSTwitterAPIMobileSettingsLogoutRequest_h */
