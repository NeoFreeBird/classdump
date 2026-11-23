//
#ifndef T1TweetComposeContainerViewControllerDelegate_Protocol_h
#define T1TweetComposeContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeContainerViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)tweetComposeContainerViewController:(id)controller dismissWithResult:(id)result;

@optional

@end

#endif /* T1TweetComposeContainerViewControllerDelegate_Protocol_h */
