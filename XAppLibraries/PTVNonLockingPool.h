//
#ifndef PTVNonLockingPool_h
#define PTVNonLockingPool_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVNonLockingPool : NSObject {
    /* instance variables */
    id /* block */ _generator;
    NSMutableArray *_pool;
    int _count;
}

@property (nonatomic) long long max;

/* instance methods */
- (id)initWithGenerator:(id /* block */)generator;
- (_Bool)push:(id)push;
- (id)pop;
- (_Bool)drain:(unsigned long long)drain;

@end

#endif /* PTVNonLockingPool_h */
