//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
