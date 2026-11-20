//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
