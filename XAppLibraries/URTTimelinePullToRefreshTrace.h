//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTTimelinePullToRefreshTrace_h
#define URTTimelinePullToRefreshTrace_h
@import Foundation;

@class NSObject;

@interface URTTimelinePullToRefreshTrace : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 repository;
    @40@0:8:16@24@32 traceName;
    @40@0:8:16@24@32 spanName;
    @40@0:8:16@24@32 traceType;
    @40@0:8:16@24@32 signpostMessage;
    @40@0:8:16@24@32 cancelEvent;
}

/* class methods */
+ (id)traceForTimelineUID:(id)uid;

/* instance methods */
- (void)activate;
- (void)cancel;
- (void)startSpan:(long long)span;
- (void)stopSpan:(long long)span;
- (void)cancelSpan:(long long)span;
- (id)init;

@end

#endif /* URTTimelinePullToRefreshTrace_h */
