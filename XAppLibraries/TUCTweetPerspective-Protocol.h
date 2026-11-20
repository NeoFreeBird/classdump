//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCTweetPerspective_Protocol_h
#define TUCTweetPerspective_Protocol_h
@import Foundation;

#include "TAPTweetUserPerspective-Protocol.h"
#include "TFCCardDataSource-Protocol.h"
#include "TFSTwitterEntityURLProvider-Protocol.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"
#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSNumber;

@protocol TUCTweetPerspective <TAPTweet.TAPTweetPerspective, TFSTwitterPromotedLoggable, TFSTwitterEntityURLProvider>

@required

@property (readonly, nonatomic) NSNumber *statusIDNumber;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (retain, nonatomic) id <TAPTweetUserPerspective> fromUser;
@property (nonatomic) _Bool isPostInstallPromptVisible;

@optional

@end

#endif /* TUCTweetPerspective_Protocol_h */
