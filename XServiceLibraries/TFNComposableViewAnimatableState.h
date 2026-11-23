//
#ifndef TFNComposableViewAnimatableState_h
#define TFNComposableViewAnimatableState_h
@import Foundation;

@class NSNumber, NSObject, NSValue;

@interface TFNComposableViewAnimatableState : NSObject

@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) NSValue *frame;
@property (retain, nonatomic) NSValue *transform;

/* instance methods */
- (void)applyToView:(id)view;

@end

#endif /* TFNComposableViewAnimatableState_h */
