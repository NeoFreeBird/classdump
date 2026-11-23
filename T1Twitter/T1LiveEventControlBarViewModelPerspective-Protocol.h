//
#ifndef T1LiveEventControlBarViewModelPerspective_Protocol_h
#define T1LiveEventControlBarViewModelPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@class NSString, TFSTwitterMediaInfo, TFSTwitterUserReference;

@protocol T1LiveEventControlBarViewModelPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) TFSTwitterMediaInfo *primaryMediaInfo;
@property (readonly, nonatomic) TFSTwitterUserReference *primaryMediaOwnerReference;
@property (readonly, copy, nonatomic) NSString *senderDisplayUsername;

@optional

@end

#endif /* T1LiveEventControlBarViewModelPerspective_Protocol_h */
