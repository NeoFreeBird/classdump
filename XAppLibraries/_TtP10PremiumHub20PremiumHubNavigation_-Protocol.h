//
#ifndef _TtP10PremiumHub20PremiumHubNavigation__Protocol_h
#define _TtP10PremiumHub20PremiumHubNavigation__Protocol_h
@import Foundation;

@protocol PremiumHub.PremiumHubNavigation

@required

/* required instance methods */
- (void)handleUrlWithUrlString:(id)string completion:(id /* block */)completion;
- (void)handleLinkWithUrlString:(id)string section:(id)section key:(id)key completion:(id /* block */)completion;
- (void)navigateToSettings;

@optional

@end

#endif /* _TtP10PremiumHub20PremiumHubNavigation__Protocol_h */
