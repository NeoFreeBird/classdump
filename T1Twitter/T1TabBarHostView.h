//
#ifndef T1TabBarHostView_h
#define T1TabBarHostView_h
@import Foundation;

#include "T1TabBarViewController.h"

@class UIView;

@interface T1TabBarHostView : UIView

@property (weak, nonatomic) T1TabBarViewController *tabBarViewController;

/* instance methods */
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* T1TabBarHostView_h */
