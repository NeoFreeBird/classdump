//
#ifndef GADDeallocationMonitor_h
#define GADDeallocationMonitor_h
@import Foundation;

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GADDeallocationMonitor : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_completionBlocks;
}

/* instance methods */
- (id)initWithAssociatedObject:(id)object completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)addCompletionHandler:(id /* block */)handler;

@end

#endif /* GADDeallocationMonitor_h */
