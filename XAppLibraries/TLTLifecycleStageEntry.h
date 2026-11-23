//
#ifndef TLTLifecycleStageEntry_h
#define TLTLifecycleStageEntry_h
@import Foundation;

@class NSArray, NSObject;

@interface TLTLifecycleStageEntry : NSObject

@property (copy, nonatomic) NSArray *operations;
@property (nonatomic) _Bool notified;

/* instance methods */
- (void)addOperation:(id)operation;
- (void)notify;
- (void)_runOperations:(id)operations;

@end

#endif /* TLTLifecycleStageEntry_h */
