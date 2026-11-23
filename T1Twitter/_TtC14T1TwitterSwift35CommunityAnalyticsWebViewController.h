//
#ifndef _TtC14T1TwitterSwift35CommunityAnalyticsWebViewController_h
#define _TtC14T1TwitterSwift35CommunityAnalyticsWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1TwitterSwift.CommunityAnalyticsWebViewController : T1WebViewController // (Swift)

@property (nonatomic, readonly) _Bool hasCustomNavigationBar;

/* instance methods */
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* _TtC14T1TwitterSwift35CommunityAnalyticsWebViewController_h */
