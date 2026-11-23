//
#ifndef PTVWindow_h
#define PTVWindow_h
@import Foundation;

@class UIView, UIWindow;

@interface PTVWindow : UIWindow {
    /* instance variables */
    PTVWindow *_weakSelf;
    UIView *_safeAreaDisplay;
}

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)observeTweak;
- (void)unobserveTweak;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)determineBorderColor;

@end

#endif /* PTVWindow_h */
