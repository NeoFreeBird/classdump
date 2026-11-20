//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCTweetPerspective_Protocol_h
#define TUCTweetPerspective_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFSTwitterEntityURLProvider-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSNumber;
@protocol TAPTweetUserPerspective;

@protocol TUCTweetPerspective <TAPTweet.TAPTweetPerspective, TFSTwitterPromotedLoggable, TFSTwitterEntityURLProvider>

@required

@property (nonatomic, readonly) NSNumber *statusIDNumber;
@property (nonatomic, readonly) id <TFCCardDataSource> cardDataSource;
@property (nonatomic, retain) id <TAPTweetUserPerspective> fromUser;
@property (nonatomic) _Bool isPostInstallPromptVisible;

@optional

@end

#endif /* TUCTweetPerspective_Protocol_h */
