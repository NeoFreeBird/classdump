//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
