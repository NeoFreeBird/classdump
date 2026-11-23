//
#ifndef T1TweetTakeoverPromptViewControllerDelegate_Protocol_h
#define T1TweetTakeoverPromptViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1TweetTakeoverPromptViewControllerDelegate

@required

/* required instance methods */
- (void)tweetTakeoverPromptViewController:(id)controller didSelectEditTweetWithComposition:(id)composition;
- (void)tweetTakeoverPromptViewController:(id)controller didSelectSendTweetWithComposition:(id)composition;

@optional

@end

#endif /* T1TweetTakeoverPromptViewControllerDelegate_Protocol_h */
