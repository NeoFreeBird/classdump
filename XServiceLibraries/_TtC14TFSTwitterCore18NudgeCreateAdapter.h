//
#ifndef _TtC14TFSTwitterCore18NudgeCreateAdapter_h
#define _TtC14TFSTwitterCore18NudgeCreateAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.NudgeCreateAdapter : NSObject // (Swift)

/* class methods */
+ (id)createWithActionService:(id)service tweetText:(id)text tweetType:(long long)type inReplyToTweetID:(id)id conversationID:(id)id nudgeOptions:(id)options completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore18NudgeCreateAdapter_h */
