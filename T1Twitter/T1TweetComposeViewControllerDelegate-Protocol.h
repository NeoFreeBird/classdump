//
#ifndef T1TweetComposeViewControllerDelegate_Protocol_h
#define T1TweetComposeViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tweetComposeViewControllerDidLiveBroadcast:(id)broadcast;
- (void)tweetComposeViewControllerDidCancelComposing:(id)composing;
- (void)tweetComposeViewControllerDidCompleteComposing:(id)composing;

@end

#endif /* T1TweetComposeViewControllerDelegate_Protocol_h */
