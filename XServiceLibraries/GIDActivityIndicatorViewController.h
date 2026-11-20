//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
