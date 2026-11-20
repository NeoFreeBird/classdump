//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileAboutViewController_h
#define T1ProfileAboutViewController_h
@import Foundation;

@class TFNTwitterAccount, TFSTwitterUserReference, _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1ProfileAboutViewController : type metadata for TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *user;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *dataModel;
    NSNumber"16@0:8 *viewModel;
}

/* class methods */
+ (void)viewControllerForUserReference:(TFSTwitterUserReference *)reference account:(TFNTwitterAccount *)account completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithUser:(id)user account:(id)account dataModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)settingsButtonTapped;
- (void)dealloc;

@end

#endif /* T1ProfileAboutViewController_h */
