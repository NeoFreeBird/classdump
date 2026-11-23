//
#ifndef T1GrokImaginePostURLDetector_h
#define T1GrokImaginePostURLDetector_h
@import Foundation;

#include "_TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate_-Protocol.h"
#include "_TtP15TwitterComposer34GrokImaginePostURLDetectorProtocol_-Protocol.h"

@class NSObject;

@interface T1GrokImaginePostURLDetector : NSObject <TwitterComposer.GrokImaginePostURLDetectorProtocol> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *detectedPostIDs;
    NSNumber"16@0:8 *failedPostIDs;
    NSNumber"16@0:8 *pendingDownloads;
    NSNumber"16@0:8 *debounceTimer;
    NSNumber"16@0:8 *lastText;
    NSNumber"16@0:8 *textAtLeadingEdge;
}

@property (nonatomic, weak) id <TwitterComposer.GrokImaginePostURLDetectorDelegate> delegate;
@property (nonatomic, readonly) _Bool isDownloading;

/* class methods */
+ (_Bool)isGrokImaginePostURL:(id)url;

/* instance methods */
- (void)detectURLsIfNeededIn:(id)in;
- (void)cancel;
- (id)init;

@end

#endif /* T1GrokImaginePostURLDetector_h */
