//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1XLinkFactory_h
#define T1XLinkFactory_h
@import Foundation;

@class NSObject;

@interface T1XLinkFactory : NSObject // (Swift)

/* class methods */
+ (_Bool)canShowXLinkForStatus:(id)status account:(id)account;
+ (id)firstEligibleURLInStatus:(id)status account:(id)account;
+ (id)contentParamsForStatus:(id)status clickedURL:(id)url account:(id)account;
+ (id)openHandlerWithSourceNavigationController:(id)controller sourceStatus:(id)status account:(id)account url:(id)url;
+ (id)openHandlerWithSourceNavigationController:(id)controller sourceStatus:(id)status account:(id)account url:(id)url morphSourceView:(id)view;
+ (id)universalLinkHandoffOpenHandlerWithRootURL:(id)url expandedURL:(id)url verifiableTalonURL:(id)url account:(id)account sourceStatus:(id)status makeSafariViewController:(id /* block */)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1XLinkFactory_h */
