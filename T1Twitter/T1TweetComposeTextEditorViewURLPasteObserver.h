//
#ifndef T1TweetComposeTextEditorViewURLPasteObserver_h
#define T1TweetComposeTextEditorViewURLPasteObserver_h
@import Foundation;

#include "T1TweetComposeTextEditorViewPasteObserver.h"
#include "T1TweetComposeTextEditorViewURLPasteObserverDelegate-Protocol.h"

@interface T1TweetComposeTextEditorViewURLPasteObserver : T1TweetComposeTextEditorViewPasteObserver { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

@property (nonatomic, weak) id <T1TweetComposeTextEditorViewURLPasteObserverDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1TweetComposeTextEditorViewURLPasteObserver_h */
