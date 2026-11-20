//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BookmarksManagerTweetPerspective_Protocol_h
#define T1BookmarksManagerTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSDictionary, NSString;

@protocol T1BookmarksManagerTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) NSDictionary *scribeParameters;
@property (nonatomic, readonly) NSString *scribeComponent;

@optional

@end

#endif /* T1BookmarksManagerTweetPerspective_Protocol_h */
