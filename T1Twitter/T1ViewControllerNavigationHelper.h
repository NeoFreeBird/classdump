//
#ifndef T1ViewControllerNavigationHelper_h
#define T1ViewControllerNavigationHelper_h
@import Foundation;

@class NSObject;

@interface T1ViewControllerNavigationHelper : NSObject

/* class methods */
+ (id)handlerForURL:(id)url account:(id)account;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context expandedURL:(id)url;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceStatus:(id)status;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceStatus:(id)status applyAdURLTransforms:(_Bool)urltransforms;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceUser:(id)user;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceEntities:(id)entities;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromCardDataSource:(id)source;
+ (id)handlerForParserResult:(id)result account:(id)account scribeContext:(id)context;
+ (id)contentYouSeeSettingsHandlerForMode:(long long)mode account:(id)account sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context expandedURL:(id)url sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceStatus:(id)status sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceStatus:(id)status applyAdURLTransforms:(_Bool)urltransforms sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceUser:(id)user sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceEntities:(id)entities sourceViewController:(id)controller;
+ (id)handlerForURL:(id)url account:(id)account scribeContext:(id)context fromCardDataSource:(id)source sourceViewController:(id)controller;
+ (id)_t1_handlerForURL:(id)url account:(id)account scribeContext:(id)context fromSourceStatus:(id)status applyAdURLTransforms:(_Bool)urltransforms sourceViewController:(id)controller;
+ (id)_t1_handlerForURL:(id)url expandedURL:(id)url account:(id)account scribeContext:(id)context sourceViewController:(id)controller;
+ (id)_t1_handlerForURL:(id)url expandedURL:(id)url account:(id)account scribeContext:(id)context sourceViewController:(id)controller webviewFactory:(id /* block */)factory;
+ (id)_t1_jetfuelDeepLinkModeHandlerForParserResult:(id)result account:(id)account;
+ (long long)_t1_mediaInfoIndexForStatus:(id)status URL:(id)url account:(id)account;
+ (id)handlerForParserResult:(id)result account:(id)account scribeContext:(id)context sourceViewController:(id)controller;
+ (id)_t1_redesignSettingsHandlerForDeeplink:(id)deeplink account:(id)account;
+ (id)_t1_authenticatedWebviewControllerWithURL:(id)url account:(id)account openNativeLinksInWebView:(_Bool)view;
+ (id)_t1_authenticatedWebviewControllerWithURL:(id)url account:(id)account;
+ (id)_profileViewControllerForUserReference:(id)reference account:(id)account sourceNavigationMetadata:(id)metadata sourceViewController:(id)controller tabNavigationBlock:(id /* block */)block;
+ (_Bool)_t1_shouldDenyAccessForTeamsAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1ViewControllerNavigationHelper_h */
