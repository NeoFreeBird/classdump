//
#ifndef _TtC14TFSTwitterCore26CreateTweetWithUndoAdapter_h
#define _TtC14TFSTwitterCore26CreateTweetWithUndoAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.CreateTweetWithUndoAdapter : NSObject // (Swift)

/* class methods */
+ (void)submitWithActionService:(id)service tweetText:(id)text tweetType:(long long)type proposedTweetID:(id)id inReplyToTweetID:(id)id conversationID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore26CreateTweetWithUndoAdapter_h */
