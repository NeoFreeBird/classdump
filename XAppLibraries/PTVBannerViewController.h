//
#ifndef PTVBannerViewController_h
#define PTVBannerViewController_h
@import Foundation;

@class UIViewController;

@interface PTVBannerViewController : UIViewController {
    /* instance variables */
    unsigned long long _supportedInterfaceOrientations;
}

/* instance methods */
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientationsFromViewController:(id)controller;

@end

#endif /* PTVBannerViewController_h */
