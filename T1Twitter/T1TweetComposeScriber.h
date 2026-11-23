//
#ifndef T1TweetComposeScriber_h
#define T1TweetComposeScriber_h
@import Foundation;

#include "T1TweetComposeScriberDelegate-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject;

@interface T1TweetComposeScriber : NSObject {
    /* instance variables */
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
    _Bool _isNoteTweetsEnabled;
    struct { unsigned int everEditedText:1; unsigned int everExceededMaxChar:1; unsigned int everWarnedMaxCharLimit:1; unsigned int everStartedNoteTweet:1; } _scribeFlags;
}

@property (weak, nonatomic) id <T1TweetComposeScriberDelegate> delegate;

/* instance methods */
- (id)initWithScribe:(id)scribe isNoteTweetsEnabled:(_Bool)enabled;
- (id)init;
- (void)logEventsForTextChange;
- (void)logEventsForCloseAction;
- (long long)_t1_remainingCharacterCount;
- (_Bool)_t1_isTextEdited;
- (_Bool)_t1_isLongform;
- (id)_t1_scribeContext;
- (long long)_t1_warningRemainingCharacterCount;
- (id)_t1_sessionConfig;

@end

#endif /* T1TweetComposeScriber_h */
