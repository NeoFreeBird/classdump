//
#ifndef TSShareLinkSession_h
#define TSShareLinkSession_h
@import Foundation;

@class NSObject;

@interface TSShareLinkSession : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 canonicalURL;
    @40@0:8:16@24@32 minter;
    @40@0:8:16@24@32 telemetry;
    @40@0:8:16@24@32 minimumWait;
    @40@0:8:16@24@32 startTime;
    @40@0:8:16@24@32 lock;
    @40@0:8:16@24@32 state;
}

@property (nonatomic, readonly) _Bool isReady;

/* instance methods */
- (id)systemShareSheetURLWithSParam:(unsigned long long)sparam fallback:(id)fallback;
- (void)logSystemShareSheetShareOfURL:(id)url;
- (void)copyToPasteboardWithSParam:(unsigned long long)sparam fallback:(id)fallback pasteboard:(id)pasteboard;
- (void)waitUntilReady;
- (id)init;

@end

#endif /* TSShareLinkSession_h */
