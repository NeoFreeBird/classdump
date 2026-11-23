//
#ifndef TFSTwitterAPIFriendshipsCreateAllRequest_h
#define TFSTwitterAPIFriendshipsCreateAllRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFriendshipsCreateAllRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserIDs:(id)ids context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendshipsCreateAllRequest_h */
