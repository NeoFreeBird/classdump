//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFriendsIDsRequest_h
#define TFSTwitterAPIFriendsIDsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFriendsIDsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithType:(unsigned long long)type cursor:(id)cursor context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendsIDsRequest_h */
