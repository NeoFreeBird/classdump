//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
