//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAnimation_h
#define PTVAnimation_h
@import Foundation;

@class NSObject;

@interface PTVAnimation : NSObject {
    /* instance variables */
    id /* block */ _block;
    id /* block */ _completion;
    id /* block */ _curve;
    double _duration;
    double _currentTime;
}

@property (readonly, nonatomic) _Bool completed;

/* class methods */
+ (id)animationWithDuration:(double)duration curve:(id /* block */)curve block:(id /* block */)block completion:(id /* block */)completion;

/* instance methods */
- (id)initWithDuration:(double)duration curve:(id /* block */)curve block:(id /* block */)block completion:(id /* block */)completion;
- (double)currentValue;
- (double)valueAfterDuration:(double)duration;
- (double)valueAtPoint:(double)point;
- (_Bool)hasCompleted;
- (void)complete;
- (void)advanceBy:(double)by;
- (void)advanceTo:(double)to;
- (void)advanceToStart;

@end

#endif /* PTVAnimation_h */
