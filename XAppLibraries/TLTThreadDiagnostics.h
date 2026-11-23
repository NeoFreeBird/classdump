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
