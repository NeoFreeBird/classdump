//
#ifndef PTVBlock_h
#define PTVBlock_h
@import Foundation;

#include "PTVSignal.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface PTVBlock : NSObject {
    /* instance variables */
    _Bool _executed;
    _Bool _finished;
    id _result;
    PTVSignal *_signal;
    id /* block */ _function;
    NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (id)block:(id /* block */)block;
+ (id)block:(id /* block */)block queue:(id)queue;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)initWithBlock:(id /* block */)block queue:(id)queue;
- (id)init;
- (void)execute;
- (void)fire;
- (void)finish:(id)finish;
- (id)input;
- (id)result;
- (_Bool)finished;
- (void)then:(id)then;
- (void)dealloc;

@end

#endif /* PTVBlock_h */
