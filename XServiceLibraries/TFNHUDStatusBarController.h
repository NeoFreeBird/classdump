//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNHUDStatusBarController_h
#define TFNHUDStatusBarController_h
@import Foundation;

@class UIViewController, UIWindow;

@interface TFNHUDStatusBarController : UIViewController

@property (retain, nonatomic) UIWindow *referenceWindow;

/* instance methods */
- (id)_referenceViewController;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* TFNHUDStatusBarController_h */
