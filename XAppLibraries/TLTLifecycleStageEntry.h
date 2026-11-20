//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
