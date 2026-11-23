//
#ifndef T1TweetComposeContainerViewControllerResult_h
#define T1TweetComposeContainerViewControllerResult_h
@import Foundation;

@class NSObject;

@interface T1TweetComposeContainerViewControllerResult : NSObject

@property (readonly, nonatomic) _Bool sendingTweetsAttempted;
@property (readonly, nonatomic) _Bool liveBroadcasted;
@property (readonly, nonatomic) _Bool reply;

/* instance methods */
- (id)init;
- (id)initWithSendingTweetsAttempted:(_Bool)attempted liveBroadcasted:(_Bool)broadcasted reply:(_Bool)reply;
- (_Bool)isSendingTweetsAttempted;
- (_Bool)isLiveBroadcasted;
- (_Bool)isReply;

@end

#endif /* T1TweetComposeContainerViewControllerResult_h */
