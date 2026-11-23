//
#ifndef TFSKVODispatcher_h
#define TFSKVODispatcher_h
@import Foundation;

@class NSObject, NSString;

@interface TFSKVODispatcher : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) void * context;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id object;
@property (readonly, weak, nonatomic) id weakObject;
@property (readonly, copy, nonatomic) id /* block */ dispatchBlock;
@property (nonatomic) _Bool suspendDispatching;

/* instance methods */
- (id)initToObserveValueForKeyPath:(id)path ofObject:(id)object options:(unsigned long long)options context:(void *)context suspended:(_Bool)suspended withDispatchBlock:(id /* block */)block;
- (id)initToObserveValueForKeyPath:(id)path ofWeakObject:(id)object options:(unsigned long long)options context:(void *)context suspended:(_Bool)suspended withDispatchBlock:(id /* block */)block;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* TFSKVODispatcher_h */
