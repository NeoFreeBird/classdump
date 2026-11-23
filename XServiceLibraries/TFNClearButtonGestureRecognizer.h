//
#ifndef TFNClearButtonGestureRecognizer_h
#define TFNClearButtonGestureRecognizer_h
@import Foundation;

#include "TFNClearActionControl.h"
#include "TFNClearButton.h"

@class UIGestureRecognizer;

@interface TFNClearButtonGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) TFNClearButton *button;
@property (weak, nonatomic) TFNClearActionControl *control;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;

@end

#endif /* TFNClearButtonGestureRecognizer_h */
