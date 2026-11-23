//
#ifndef UIViewControllerContextTransitioning_Protocol_h
#define UIViewControllerContextTransitioning_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol UIViewControllerContextTransitioning <NSObject>

@required

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic, readonly) _Bool interactive;
@property (nonatomic, readonly) _Bool interactive;
@property (nonatomic, readonly) _Bool transitionWasCancelled;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } targetTransform;

/* required instance methods */
- (_Bool)isAnimated;
- (_Bool)isAnimated;
- (_Bool)isInteractive;
- (_Bool)isInteractive;
- (void)updateInteractiveTransition:(double)transition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (void)completeTransition:(_Bool)transition;
- (id)viewControllerForKey:(id)key;
- (id)viewControllerForKey:(id)key;
- (id)viewForKey:(id)key;
- (id)viewForKey:(id)key;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)controller;

@optional

@end

#endif /* UIViewControllerContextTransitioning_Protocol_h */
