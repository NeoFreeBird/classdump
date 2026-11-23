//
#ifndef TFNToastWindow_h
#define TFNToastWindow_h
@import Foundation;

#include "TFNToastViewController.h"

@class UIWindow;

@interface TFNToastWindow : UIWindow

@property (readonly, nonatomic) TFNToastViewController *toastViewController;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toaster:(id)toaster;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TFNToastWindow_h */
