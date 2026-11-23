//
#ifndef TAVHydraPlayerState_h
#define TAVHydraPlayerState_h
@import Foundation;

#include "TAVPlaybackState.h"

@class NSNumber, NSObject;

@interface TAVHydraPlayerState : NSObject

@property (readonly, copy, nonatomic) NSNumber *minimumSafeRPO;
@property (readonly, copy, nonatomic) NSNumber *currentRPO;
@property (readonly, copy, nonatomic) TAVPlaybackState *tavPlaybackState;

/* instance methods */
- (id)initWithMinimumSafeRPO:(id)rpo currentRPO:(id)rpo tavPlaybackState:(id)state;

@end

#endif /* TAVHydraPlayerState_h */
