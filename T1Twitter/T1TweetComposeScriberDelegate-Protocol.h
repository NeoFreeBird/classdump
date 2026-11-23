//
#ifndef T1TweetComposeScriberDelegate_Protocol_h
#define T1TweetComposeScriberDelegate_Protocol_h
@import Foundation;

@protocol T1TweetComposeScriberDelegate

@required

/* required instance methods */
- (id)tweetComposerScriberActiveComposition:(id)composition;
- (long long)tweetComposerScriberRemainingCharacterCount:(id)count;
- (id)tweetComposerScriberContext:(id)context;
- (id)tweetComposerScriberSessionConfig:(id)config;
- (id)tweetComposerScriberInputLocaleIdentifier:(id)identifier;

@optional

@end

#endif /* T1TweetComposeScriberDelegate_Protocol_h */
