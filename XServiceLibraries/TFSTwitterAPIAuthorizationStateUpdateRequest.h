//
#ifndef TFSTwitterAPIAuthorizationStateUpdateRequest_h
#define TFSTwitterAPIAuthorizationStateUpdateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAuthorizationStateUpdateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithContext:(id)context userID:(id)id deviceID:(id)id permissionName:(id)name authorizationState:(id)state responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAuthorizationStateUpdateRequest_h */
