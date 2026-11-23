//
#ifndef TFNPaddedButton_h
#define TFNPaddedButton_h
@import Foundation;

@class UIButton;

@interface TFNPaddedButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tapInsets;

/* instance methods */
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* TFNPaddedButton_h */
