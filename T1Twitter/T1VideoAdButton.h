//
#ifndef T1VideoAdButton_h
#define T1VideoAdButton_h
@import Foundation;

@class UIButton;

@interface T1VideoAdButton : UIButton

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setTitle:(id)title forState:(unsigned long long)state;
- (void)_setButtonOffsets;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* T1VideoAdButton_h */
