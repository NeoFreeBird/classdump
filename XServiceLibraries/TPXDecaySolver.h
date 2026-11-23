//
#ifndef TPXDecaySolver_h
#define TPXDecaySolver_h
@import Foundation;

@class NSObject;

@interface TPXDecaySolver : NSObject

@property double position;
@property double velocity;
@property double decayRate;
@property double finalPosition;
@property double timeUntilStable;
@property double stabilityTimestep;
@property double stabilityPrecision;

/* class methods */
+ (id)decay;
+ (id)keyPathsForValuesAffectingTimeUntilStable;
+ (id)keyPathsForValuesAffectingFinalPosition;
+ (id)keyPathsForValuesAffectingDecayRate;

/* instance methods */
- (id)init;
- (double)finalPositionWithDecay:(double)decay;
- (double)derivativeOfTimeUntilStableWithDecay:(double)decay;
- (double)timeUntilStableWithDecay:(double)decay;
- (_Bool)isStable;
- (_Bool)isStableAtTime:(double)time;
- (double)positionAtTime:(double)time;
- (double)velocityAtTime:(double)time;

@end

#endif /* TPXDecaySolver_h */
