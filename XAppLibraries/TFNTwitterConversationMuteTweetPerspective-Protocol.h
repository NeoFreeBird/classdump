//
#ifndef TFNTwitterConversationMuteTweetPerspective_Protocol_h
#define TFNTwitterConversationMuteTweetPerspective_Protocol_h
@import Foundation;

#include "_TtP8TAPTweet19TAPTweetPerspective_-Protocol.h"

@protocol TFNTwitterConversationMuteTweetPerspective <TAPTweet.TAPTweetPerspective>

@required

@property (readonly, nonatomic) long long statusID;
@property (readonly, nonatomic) long long conversationID;
@property (readonly, nonatomic) _Bool conversationMuted;

/* required instance methods */
- (_Bool)isConversationMuted;

@optional

@end

#endif /* TFNTwitterConversationMuteTweetPerspective_Protocol_h */
