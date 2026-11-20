//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeriscopeRectifyAccountViewController_h
#define T1PeriscopeRectifyAccountViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1PeriscopeRectifyAccountViewController : T1WebViewController

@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithRectifyURL:(id)url account:(id)account completion:(id /* block */)completion;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (void)close:(id)close;

@end

#endif /* T1PeriscopeRectifyAccountViewController_h */
