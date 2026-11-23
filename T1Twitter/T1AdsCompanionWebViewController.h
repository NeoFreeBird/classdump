//
#ifndef T1AdsCompanionWebViewController_h
#define T1AdsCompanionWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1AdsCompanionWebViewController : T1WebViewController

/* class methods */
+ (id)_adsCompanionBaseUrlWithPath:(id)path;

/* instance methods */
- (id)initWithAccount:(id)account path:(id)path;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)viewDidLoad;
- (_Bool)shouldHideShareSheetIcon;
- (_Bool)shouldHideSecuredIcon;
- (id)rightBarButtonItem;
- (void)_accountsNavItemTapped;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)didFinishLoadingWithError:(id)error;
- (void)_presentWebViewWithURLString:(id)urlstring;

@end

#endif /* T1AdsCompanionWebViewController_h */
