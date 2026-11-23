//
#ifndef TFNLegacyButtonAnimationCoordinator_Protocol_h
#define TFNLegacyButtonAnimationCoordinator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLegacyButtonAnimationCoordinator <NSObject>

@required

/* required instance methods */
- (_Bool)animateButton:(id)button forTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (_Bool)animateButton:(id)button withAnimationType:(id)type;
- (void)removeInFlightAnimationOnButton:(id)button;

@optional

@end

#endif /* TFNLegacyButtonAnimationCoordinator_Protocol_h */
