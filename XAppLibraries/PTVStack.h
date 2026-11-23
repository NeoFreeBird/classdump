//
#ifndef PTVStack_h
#define PTVStack_h
@import Foundation;

@class NSLock, NSMutableArray, NSObject;

@interface PTVStack : NSObject {
    /* instance variables */
    NSMutableArray *_stack;
    NSLock *_lock;
}

/* instance methods */
- (id)init;
- (id)top;
- (id)pop;
- (id)shift;
- (void)push:(id)push;
- (void)set:(id)set;
- (void)clear;
- (void)moveToFront:(id /* block */)front;
- (void)moveToBottom:(id /* block */)bottom;
- (int)count;

@end

#endif /* PTVStack_h */
