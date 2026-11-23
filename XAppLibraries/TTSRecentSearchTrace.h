//
#ifndef TTSRecentSearchTrace_h
#define TTSRecentSearchTrace_h
@import Foundation;

@class NSObject;

@interface TTSRecentSearchTrace : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 queue;
    @40@0:8:16@24@32 rootSpanContext;
    @40@0:8:16@24@32 childSpanContexts;
    @40@0:8:16@24@32 tracer;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startFetching;
- (void)stopFetchingAndStartHydrating;
- (void)stopFetchingAndStartRendering;
- (void)stopHydratingAndStartRendering;
- (void)stopRendering;
- (void)cancelRendering;
- (void)cancel;
- (void)abortWithReason:(id)reason;

@end

#endif /* TTSRecentSearchTrace_h */
