//
#ifndef _TtC32TwitterHomeFeatureImplementation45CustomTimelineDetailTrayContentViewController_h
#define _TtC32TwitterHomeFeatureImplementation45CustomTimelineDetailTrayContentViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, UIViewController, _$sSo22UINavigationControllerC, _$sSo22UIPanGestureRecognizerC;

@interface TwitterHomeFeatureImplementation.CustomTimelineDetailTrayContentViewController : UIViewController <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    __C.UINavigationController embeddedNavigationController;
    __C.UIPanGestureRecognizer swipeBackGesture;
    Swift.Bool didCommitSwipeBack;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)handleSwipeBack:(id)back;
- (void)backButtonTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation45CustomTimelineDetailTrayContentViewController_h */
