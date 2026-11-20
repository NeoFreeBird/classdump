//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StripeManageSubscriptionWebViewController_h
#define T1StripeManageSubscriptionWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1StripeManageSubscriptionWebViewController : T1WebViewController // (Swift)

/* instance methods */
- (id)initWithAccount:(id)account url:(id)url;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* T1StripeManageSubscriptionWebViewController_h */
