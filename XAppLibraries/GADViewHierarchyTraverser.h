//
#ifndef GADViewHierarchyTraverser_h
#define GADViewHierarchyTraverser_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADViewHierarchyTraverser : NSObject {
    /* instance variables */
    _Bool _traversing;
    long long _sequenceNumber;
    NSObject<OS_dispatch_queue> *_SDKLowPrioritySerialQueue;
}

/* instance methods */
- (id)init;
- (void)traverseView:(id)view traversalBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)setTraversing:(_Bool)traversing;

@end

#endif /* GADViewHierarchyTraverser_h */
