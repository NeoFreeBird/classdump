//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSEventDrivenTraceRepository_h
#define TFSEventDrivenTraceRepository_h
@import Foundation;

@class NSObject;

@interface TFSEventDrivenTraceRepository : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 queue;
    B24@0:8@"NSString"16 tracer;
    B24@0:8@"NSString"16 activeTraces;
    B24@0:8@"NSString"16 registeredTraces;
    B24@0:8@"NSString"16 spanAnalyzers;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)registerTraceWithTraceType:(id)type eventDrivenTrace:(id)trace;
- (void)unregisterTraceWithTraceType:(id)type;
- (void)activateTraceWithTraceType:(id)type;
- (_Bool)hasActiveTraceWithTraceType:(id)type;
- (void)updateAnyTraceWithEvent:(id)event;
- (void)updateTraceWithTraceType:(id)type event:(id)event;
- (void)updateTraceWithTraceType:(id)type metadata:(id)metadata;
- (void)abortTraceWithTraceType:(id)type reason:(id)reason;
- (id)init;

@end

#endif /* TFSEventDrivenTraceRepository_h */
