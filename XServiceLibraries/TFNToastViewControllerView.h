//
#ifndef TFNToastViewControllerView_h
#define TFNToastViewControllerView_h
@import Foundation;

@class UIView;

@interface TFNToastViewControllerView : UIView {
    /* instance variables */
    _Bool _didInstallHingeInteraction;
}

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didMoveToWindow;
- (void)_tfn_installHingeInteractionIfNeeded;

@end

#endif /* TFNToastViewControllerView_h */
