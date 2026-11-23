//
#ifndef TFNSpringTransitionAnimation_h
#define TFNSpringTransitionAnimation_h
@import Foundation;

@class NSObject;

@interface TFNSpringTransitionAnimation : NSObject // (Swift)

@property (nonatomic) double duration;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;

/* class methods */
+ (id)defaultAnimation;

/* instance methods */
- (id)initWithDuration:(double)duration damping:(double)damping initialVelocity:(double)velocity;
- (void)popIn:(id)in completion:(id /* block */)completion;
- (void)popOut:(id)out completion:(id /* block */)completion;
- (void)transitionIn:(id)in replacing:(id)replacing completion:(id /* block */)completion;
- (void)transitionOut:(id)out showing:(id)showing completion:(id /* block */)completion;
- (id)init;

@end

#endif /* TFNSpringTransitionAnimation_h */
