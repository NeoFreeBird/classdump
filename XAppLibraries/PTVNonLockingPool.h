//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
