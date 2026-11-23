//
#ifndef CAShapeLayer_DynamicColor_h
#define CAShapeLayer_DynamicColor_h
@import Foundation;

@interface CAShapeLayer (DynamicColor)

/* instance methods */
- (id)tfn_fillColor;
- (void)setTfn_fillColor:(id)color;
- (id)tfn_strokeColor;
- (void)setTfn_strokeColor:(id)color;

@end

#endif /* CAShapeLayer_DynamicColor_h */
