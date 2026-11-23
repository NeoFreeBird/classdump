//
#ifndef UIViewController_PTVAdditions_h
#define UIViewController_PTVAdditions_h
@import Foundation;

@interface UIViewController (PTVAdditions)

/* instance methods */
- (long long)ptv_deprecated_interfaceOrientation;
- (id)ptv_topmostViewControllerOrSelf;
- (void)ptv_presentViewControllerOverTopmostViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)ptv_beginObservingKeyboardWillShow;
- (void)ptv_keyboardWillShow:(id)show;
- (void)ptv_keyboardWillShowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;
- (id)ptv_beginObservingKeyboardWillHide;
- (void)ptv_keyboardWillHide:(id)hide;
- (void)ptv_keyboardWillHideWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame curve:(long long)curve duration:(float)duration;

@end

#endif /* UIViewController_PTVAdditions_h */
