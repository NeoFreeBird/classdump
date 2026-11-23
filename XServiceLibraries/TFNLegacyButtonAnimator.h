//
#ifndef TFNLegacyButtonAnimator_h
#define TFNLegacyButtonAnimator_h
@import Foundation;

#include "TFNLegacyButtonAnimationCoordinator-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface TFNLegacyButtonAnimator : NSObject <TFNLegacyButtonAnimationCoordinator>

@property (retain, nonatomic) NSMutableDictionary *animationObjectsForSrcStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)performAnimationType:(id)type onButton:(id)button;
+ (void)abortInFlightAnimationOnButton:(id)button;

/* instance methods */
- (id)init;
- (void)setAnimationType:(id)type forTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (id)_tfnui_animationTypeForTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (_Bool)animateButton:(id)button forTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (_Bool)animateButton:(id)button withAnimationType:(id)type;
- (void)removeInFlightAnimationOnButton:(id)button;

@end

#endif /* TFNLegacyButtonAnimator_h */
