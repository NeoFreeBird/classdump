//
#ifndef _TtC4DMUI26TFNContainerViewController_h
#define _TtC4DMUI26TFNContainerViewController_h
@import Foundation;

@class NSString, TFNViewController, UINavigationItem, UIViewController, _$sSo16UIViewControllerC;

@interface DMUI.TFNContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.UIViewController viewController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForScreenEdgesDeferringSystemGestures;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4DMUI26TFNContainerViewController_h */
