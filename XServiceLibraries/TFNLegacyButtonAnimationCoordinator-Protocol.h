//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
