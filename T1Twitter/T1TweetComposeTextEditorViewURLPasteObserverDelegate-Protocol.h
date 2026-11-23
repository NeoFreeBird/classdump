//
#ifndef T1TweetComposeTextEditorViewURLPasteObserverDelegate_Protocol_h
#define T1TweetComposeTextEditorViewURLPasteObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetComposeTextEditorViewURLPasteObserverDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)tweetComposeTextEditorViewURLPasteObserverCanAddQuotedTweet:(id)tweet;

@optional

/* optional instance methods */
- (void)tweetComposeTextEditorViewURLPasteObserver:(id)observer addQuotedTweet:(id)tweet;
- (void)tweetComposeTextEditorViewURLPasteObserverDidPasteURL:(id)url;

@end

#endif /* T1TweetComposeTextEditorViewURLPasteObserverDelegate_Protocol_h */
