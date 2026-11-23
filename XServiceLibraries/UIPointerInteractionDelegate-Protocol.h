//
#ifndef UIPointerInteractionDelegate_Protocol_h
#define UIPointerInteractionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIPointerInteractionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)pointerInteraction:(id)interaction regionForRequest:(id)request defaultRegion:(id)region;
- (id)pointerInteraction:(id)interaction styleForRegion:(id)region;
- (void)pointerInteraction:(id)interaction willEnterRegion:(id)region animator:(id)animator;
- (void)pointerInteraction:(id)interaction willExitRegion:(id)region animator:(id)animator;

@end

#endif /* UIPointerInteractionDelegate_Protocol_h */
