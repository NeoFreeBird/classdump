//
#ifndef _TtC14TFSTwitterCore27UpdateTweetVoiceInfoAdapter_h
#define _TtC14TFSTwitterCore27UpdateTweetVoiceInfoAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UpdateTweetVoiceInfoAdapter : NSObject // (Swift)

/* class methods */
+ (id)updateWithActionService:(id)service tweetID:(id)id clipIndex:(id)index numberOfClips:(id)clips totalDurationMillis:(id)millis audiowaveValues:(id)values audioSpaceID:(id)id completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27UpdateTweetVoiceInfoAdapter_h */
