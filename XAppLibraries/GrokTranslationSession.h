//
#ifndef GrokTranslationSession_h
#define GrokTranslationSession_h
@import Foundation;

@class NSObject;

@interface GrokTranslationSession : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 content;
    @40@0:8:16@24@32 stream;
    @40@0:8:16@24@32 throttling;
    @40@0:8:16@24@32 contentTypes;
    @40@0:8:16@24@32 scribeSink;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 metadata;
    @40@0:8:16@24@32 startTime;
    @40@0:8:16@24@32 firstTokenReceivedTime;
}

/* instance methods */
- (void)startWithProgress:(id /* block */)progress completion:(id /* block */)completion;
- (id)init;

@end

#endif /* GrokTranslationSession_h */
