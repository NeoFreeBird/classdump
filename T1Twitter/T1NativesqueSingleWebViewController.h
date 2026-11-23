//
#ifndef T1NativesqueSingleWebViewController_h
#define T1NativesqueSingleWebViewController_h
@import Foundation;

#include "T1BaseWebViewController.h"

@interface T1NativesqueSingleWebViewController : T1BaseWebViewController

/* instance methods */
- (void)_adjustInsets;
- (void)viewDidLoad;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)didFinishLoadingWithError:(id)error;
- (void)webView:(id)view decidePolicyForNavigationResponse:(id)response decisionHandler:(id /* block */)handler;

@end

#endif /* T1NativesqueSingleWebViewController_h */
