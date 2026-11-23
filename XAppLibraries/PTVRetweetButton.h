//
#ifndef PTVRetweetButton_h
#define PTVRetweetButton_h
@import Foundation;

#include "PTVButton.h"

@class UIColor;

@interface PTVRetweetButton : PTVButton {
    /* instance variables */
    UIColor *_selectedTintColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setButtonImage:(id)image selectedTintColor:(id)color;
- (void)setSelected:(_Bool)selected;

@end

#endif /* PTVRetweetButton_h */
