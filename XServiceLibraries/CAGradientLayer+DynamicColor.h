//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CAGradientLayer_DynamicColor_h
#define CAGradientLayer_DynamicColor_h
@import Foundation;

@interface CAGradientLayer (DynamicColor)

/* instance methods */
- (id)tfn_colors;
- (void)setTfn_colors:(id)tfn_colors;

@end

#endif /* CAGradientLayer_DynamicColor_h */
