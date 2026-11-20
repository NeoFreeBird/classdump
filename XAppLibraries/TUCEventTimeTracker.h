//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCEventTimeTracker_h
#define TUCEventTimeTracker_h
@import Foundation;

@class NSObject;

@interface TUCEventTimeTracker : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 startTime;
    @40@0:8:16@24@32 section;
    @40@0:8:16@24@32 page;
    @40@0:8:16@24@32 component;
    @40@0:8:16@24@32 element;
    @40@0:8:16@24@32 eventLogger;
}

/* instance methods */
- (id)initWithEventLogger:(id)logger forPage:(id)page withinSection:(id)section usingComponent:(id)component usingElement:(id)element;
- (void)beginLogging;
- (void)finishLoggingAction:(id)action forElement:(id)element;
- (void)finishLoggingWithoutTime:(id)time forElement:(id)element;
- (id)init;

@end

#endif /* TUCEventTimeTracker_h */
