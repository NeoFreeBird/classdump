//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
