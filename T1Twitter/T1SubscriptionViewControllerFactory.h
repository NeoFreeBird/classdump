//
#ifndef T1SubscriptionViewControllerFactory_h
#define T1SubscriptionViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)complatManageViewControllerIfRoutedWithAccount:(id)account referringPage:(id)page;
+ (id)complatPaywallViewControllerIfRoutedWithAccount:(id)account referringPage:(id)page;
+ (id)complatPaywallViewControllerForAnyPlanIfRoutedWithAccount:(id)account entrypoint:(id)entrypoint redirectSuccessURL:(id)url postPurchaseURL:(id)url;
+ (Class)viewControllerClassWithAccount:(id)account referringPage:(id)page upgradeIfPossible:(_Bool)possible tier:(id)tier plan:(id)plan paywallThresholdTier:(id)tier;
+ (id)viewControllerWithAccount:(id)account referringPage:(id)page upgradeIfPossible:(_Bool)possible tier:(id)tier plan:(id)plan paywallThresholdTier:(id)tier redirectSuccessURL:(id)url;
+ (id)viewControllerWithAccount:(id)account referringPage:(id)page upgradeIfPossible:(_Bool)possible tier:(id)tier plan:(id)plan paywallThresholdTier:(id)tier redirectSuccessURL:(id)url postPurchaseURL:(id)url;
+ (id)viewControllerAfterPurchaseWithAccount:(id)account referringPage:(id)page;
+ (_Bool)isAdUpsellEnabledWithAccount:(id)account;
+ (id)featureUpsellActionTextWithFeature:(long long)feature account:(id)account;
+ (id)featureUpsellInlineMessageWithFeature:(long long)feature account:(id)account;
+ (id)featureUpsellButtonTitleWithFeature:(long long)feature account:(id)account;
+ (void)logFeatureUpsellActionImpressionWithAccount:(id)account feature:(long long)feature page:(id)page section:(id)section;
+ (void)logFeatureUpsellActionClickWithAccount:(id)account feature:(long long)feature page:(id)page section:(id)section;
+ (void)presentFeatureUpsellSheetWithFeature:(long long)feature from:(id)from account:(id)account dismissBlock:(id /* block */)block;
+ (void)presentFeatureUpsellSheetWithAppNavigationWithFeature:(long long)feature from:(id)from account:(id)account;
+ (void)presentMarketingPageFrom:(id)from account:(id)account feature:(long long)feature;

/* instance methods */
- (id)init;

@end

#endif /* T1SubscriptionViewControllerFactory_h */
