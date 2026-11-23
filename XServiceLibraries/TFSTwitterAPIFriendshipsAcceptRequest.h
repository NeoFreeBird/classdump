//
#ifndef TFSTwitterAPIFriendshipsAcceptRequest_h
#define TFSTwitterAPIFriendshipsAcceptRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFriendshipsAcceptRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(id)id screenName:(id)name context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendshipsAcceptRequest_h */
