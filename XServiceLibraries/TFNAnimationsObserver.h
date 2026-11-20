//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAnimationsObserver_h
#define TFNAnimationsObserver_h
@import Foundation;

@class NSMutableDictionary, NSObject, NSTimer;

@interface TFNAnimationsObserver : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAnimationOwners;
@property (retain, nonatomic) NSTimer *animationExpirationTimer;
@property (copy, nonatomic) id /* block */ animationsFilter;
@property (copy, nonatomic) id /* block */ onAnimationsEnded;
@property (nonatomic) double animationMaxDuration;
@property (readonly, nonatomic) _Bool hasActiveAnimations;

/* instance methods */
- (id)initWithFilter:(id /* block */)filter onAnimationsEnded:(id /* block */)ended animationMaxDuration:(double)duration;
- (void)_tfn_animationWillStart:(id)start;
- (void)_tfn_animationDidEnd:(id)end;
- (void)_tfn_handleAnimationEndedWithOwnerView:(id)view;
- (void)_tfn_startAnimationTimerIfNeeded;
- (void)_tfn_cancelAnimationExpirationTimer;
- (void)_tfn_addStopAnimationDeallocHook:(id)hook;
- (void)dealloc;

@end

#endif /* TFNAnimationsObserver_h */
