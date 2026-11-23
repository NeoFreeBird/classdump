//
#ifndef T1InterpolatedAnimation_h
#define T1InterpolatedAnimation_h
@import Foundation;

@class CAKeyframeAnimation, NSArray;

@interface T1InterpolatedAnimation : CAKeyframeAnimation

@property (copy, nonatomic) NSArray *normalizedValues;
@property (retain, nonatomic) id toValue;
@property (retain, nonatomic) id fromValue;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_interpolateValues;

@end

#endif /* T1InterpolatedAnimation_h */
