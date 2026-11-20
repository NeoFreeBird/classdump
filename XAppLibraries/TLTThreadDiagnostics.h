//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTThreadDiagnostics_h
#define TLTThreadDiagnostics_h
@import Foundation;

@class NSDictionary, NSMutableOrderedSet, NSObject;

@interface TLTThreadDiagnostics : NSObject {
    /* instance variables */
    NSMutableOrderedSet *_threadIDsInOrderOfApperance;
}

@property (readonly, nonatomic) NSDictionary *previousThreadInfosByThreadID;

/* class methods */
+ (void)initialize;
+ (void)startPeriodicLogging;
+ (void)stopPeriodicLogging;
+ (void)_logAndReschedule;

/* instance methods */
- (id)init;
- (void)log;

@end

#endif /* TLTThreadDiagnostics_h */
