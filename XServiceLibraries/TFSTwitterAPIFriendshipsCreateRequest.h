//
#ifndef TFSTwitterAPIFriendshipsCreateRequest_h
#define TFSTwitterAPIFriendshipsCreateRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFriendshipsCreateRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(id)id screenName:(id)name handlesChallenges:(_Bool)challenges impressionID:(id)id earned:(_Bool)earned context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendshipsCreateRequest_h */
