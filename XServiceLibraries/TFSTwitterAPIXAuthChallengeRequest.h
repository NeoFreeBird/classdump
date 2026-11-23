//
#ifndef TFSTwitterAPIXAuthChallengeRequest_h
#define TFSTwitterAPIXAuthChallengeRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIXAuthChallengeRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithIdentifier:(id)identifier OrUserId:(id)id loginVerificationRequestId:(id)id loginVerificationChallengeResponse:(id)response knownDeviceToken:(id)token authTimelineToken:(id)token context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIXAuthChallengeRequest_h */
