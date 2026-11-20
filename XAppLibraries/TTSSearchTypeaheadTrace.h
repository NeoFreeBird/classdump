//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSSearchTypeaheadTrace_h
#define TTSSearchTypeaheadTrace_h
@import Foundation;

@class NSObject;

@interface TTSSearchTypeaheadTrace : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 isLocalAndRemote;
    @40@0:8:16@24@32 queue;
    @40@0:8:16@24@32 rootSpanContext;
    @40@0:8:16@24@32 childSpanContexts;
    @40@0:8:16@24@32 tracer;
}

/* instance methods */
- (id)initWithIsLocalAndRemote:(_Bool)remote;
- (void)dealloc;
- (void)startLocalFetching;
- (void)stopLocalFetching;
- (void)stopRemoteFetching;
- (void)stopRendering;
- (void)stopRemoteOrLocalFetchingCancelRenderingAndReport;
- (void)cancel;
- (void)abortWithReason:(id)reason;
- (id)init;

@end

#endif /* TTSSearchTypeaheadTrace_h */
