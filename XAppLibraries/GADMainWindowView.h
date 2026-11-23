//
#ifndef GADMainWindowView_h
#define GADMainWindowView_h
@import Foundation;

#include "GADObserverCollection.h"

@class UIView;

@interface GADMainWindowView : UIView {
    /* instance variables */
    GADObserverCollection *_observers;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)moveToMainWindow;

@end

#endif /* GADMainWindowView_h */
