//
#ifndef TFNClearButton_h
#define TFNClearButton_h
@import Foundation;

@class UIButton;

@interface TFNClearButton : UIButton

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tapTargetBounds;

/* instance methods */
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* TFNClearButton_h */
