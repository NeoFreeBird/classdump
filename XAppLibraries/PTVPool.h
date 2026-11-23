//
#ifndef PTVPool_h
#define PTVPool_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVPool : NSObject {
    /* instance variables */
    id /* block */ _generator;
    NSMutableArray *_pool;
    int _count;
}

@property (nonatomic) long long max;

/* instance methods */
- (id)initWithGenerator:(id /* block */)generator;
- (id)pop;
- (_Bool)drain:(int)drain;
- (void)push:(id)push;

@end

#endif /* PTVPool_h */
