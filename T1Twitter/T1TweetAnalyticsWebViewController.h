//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetAnalyticsWebViewController_h
#define T1TweetAnalyticsWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1TweetAnalyticsWebViewController : T1WebViewController

@property (copy, nonatomic) id /* block */ didPressQuickPromote;

/* class methods */
+ (id)presentTweetAnalyticsWebViewControllerForAccount:(id)account status:(id)status controller:(id)controller scribeContext:(id)context;
+ (id)presentTweetAnalyticsWebViewControllerForAccount:(id)account isQuickPromote:(_Bool)promote status:(id)status controller:(id)controller scribeContext:(id)context;
+ (id)presentTweetAnalyticsWebViewControllerForAccount:(id)account statusIDNumber:(id)idnumber username:(id)username controller:(id)controller scribeContext:(id)context;
+ (void)_t1_presentTweetAnalyticsWebViewController:(id)controller statusID:(long long)id controller:(id)controller scribeContext:(id)context;

/* instance methods */
- (id)initWithAccount:(id)account isQuickPromote:(_Bool)promote sourceStatus:(id)status;
- (id)initWithAccount:(id)account sourceStatusIDNumber:(id)idnumber username:(id)username;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)didUpdateCurrentURL;
- (void)didFinishLoadingWithError:(id)error;
- (_Bool)_t1_isQuickPromoteUrl:(id)url parserResult:(id)result;
- (_Bool)_t1_isOnlineMetrixUrl:(id)url;
- (id)_t1_analyticsUrlForStatusIDNumber:(id)idnumber username:(id)username;
- (id)_t1_quickPromoteUrlForStatusIDNumber:(id)idnumber username:(id)username;
- (_Bool)shouldStartLoadWithRequest:(id)request navigationType:(long long)type preferences:(id)preferences;
- (void)_t1_presentWebViewWithURLString:(id)urlstring;

@end

#endif /* T1TweetAnalyticsWebViewController_h */
