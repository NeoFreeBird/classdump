//
#ifndef UICollisionBehaviorDelegate_Protocol_h
#define UICollisionBehaviorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICollisionBehaviorDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withItem:(id)item atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withItem:(id)item;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withItem:(id)item;
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withBoundaryIdentifier:(id)identifier atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior beganContactForItem:(id)item withBoundaryIdentifier:(id)identifier atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withBoundaryIdentifier:(id)identifier;
- (void)collisionBehavior:(id)behavior endedContactForItem:(id)item withBoundaryIdentifier:(id)identifier;

@end

#endif /* UICollisionBehaviorDelegate_Protocol_h */
