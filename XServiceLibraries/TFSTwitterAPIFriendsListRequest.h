//
#ifndef TFSTwitterAPIFriendsListRequest_h
#define TFSTwitterAPIFriendsListRequest_h
@import Foundation;

#include "TFSTwitterAPIPaginatedUsersBaseRequest.h"

@interface TFSTwitterAPIFriendsListRequest : TFSTwitterAPIPaginatedUsersBaseRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithUserID:(id)id type:(unsigned long long)type cursor:(id)cursor skipStatus:(_Bool)status context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendsListRequest_h */
