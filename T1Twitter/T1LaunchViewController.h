//
#ifndef T1LaunchViewController_h
#define T1LaunchViewController_h
@import Foundation;

@class UIViewController;

@interface T1LaunchViewController : UIViewController

/* instance methods */
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* T1LaunchViewController_h */
