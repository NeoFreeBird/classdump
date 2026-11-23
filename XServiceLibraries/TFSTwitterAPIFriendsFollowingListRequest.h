//
#ifndef TFSTwitterAPIFriendsFollowingListRequest_h
#define TFSTwitterAPIFriendsFollowingListRequest_h
@import Foundation;

#include "TFSTwitterAPIPaginatedUsersBaseRequest.h"

@interface TFSTwitterAPIFriendsFollowingListRequest : TFSTwitterAPIPaginatedUsersBaseRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithUserID:(id)id cursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name cursor:(id)cursor skipStatus:(_Bool)status additionalParameters:(id)parameters context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name cursor:(id)cursor withTotalCount:(_Bool)count context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserID:(id)id cursor:(id)cursor withTotalCount:(_Bool)count context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserID:(id)id screenName:(id)name cursor:(id)cursor withTotalCount:(_Bool)count context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendsFollowingListRequest_h */
