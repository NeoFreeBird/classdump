//
#ifndef TFSMainThreadRunLoopDeferredTask_h
#define TFSMainThreadRunLoopDeferredTask_h
@import Foundation;

@class NSObject;

@interface TFSMainThreadRunLoopDeferredTask : NSObject {
    /* instance variables */
    struct __CFRunLoopObserver * _observer;
}

@property (readonly, copy, nonatomic) id /* block */ task;

/* instance methods */
- (id)init;
- (id)initWithTask:(id /* block */)task;
- (void)dealloc;
- (void)_tfs_private_invalidateObserver;
- (void)_tfs_private_scheduleTask;
- (void)_tfs_private_invokeDeferredTask;

@end

#endif /* TFSMainThreadRunLoopDeferredTask_h */
