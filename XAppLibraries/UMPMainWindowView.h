//
#ifndef UMPMainWindowView_h
#define UMPMainWindowView_h
@import Foundation;

@class UIView;

@interface UMPMainWindowView : UIView {
    /* instance variables */
    id _observer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)moveToMainWindow;

@end

#endif /* UMPMainWindowView_h */
