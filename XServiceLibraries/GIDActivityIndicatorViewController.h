//
#ifndef GIDActivityIndicatorViewController_h
#define GIDActivityIndicatorViewController_h
@import Foundation;

@class UIActivityIndicatorView, UIViewController;

@interface GIDActivityIndicatorViewController : UIViewController

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* GIDActivityIndicatorViewController_h */
