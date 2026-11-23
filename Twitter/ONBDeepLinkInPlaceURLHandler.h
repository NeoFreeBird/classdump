//
#ifndef ONBDeepLinkInPlaceURLHandler_h
#define ONBDeepLinkInPlaceURLHandler_h
@import Foundation;

@class NSObject;

@interface ONBDeepLinkInPlaceURLHandler : NSObject

/* class methods */
+ (void)handleURL:(id)url withPresentingViewController:(id)controller forAccount:(id)account;
+ (void)handleSettingsActionForURL:(id)url withPresentingViewController:(id)controller account:(id)account;
+ (unsigned long long)URLTypeForURL:(id)url;
+ (unsigned long long)subURLTypeForURL:(id)url;

@end

#endif /* ONBDeepLinkInPlaceURLHandler_h */
