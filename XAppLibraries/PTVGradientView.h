//
#ifndef PTVGradientView_h
#define PTVGradientView_h
@import Foundation;

@class UIView;

@interface PTVGradientView : UIView

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame colors:(id)colors;
- (id)gradientLayer;
- (void)setColors:(id)colors;

@end

#endif /* PTVGradientView_h */
