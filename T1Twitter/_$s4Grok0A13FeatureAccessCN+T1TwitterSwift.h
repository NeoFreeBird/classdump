//
#ifndef _$s4Grok0A13FeatureAccessCN_T1TwitterSwift_h
#define _$s4Grok0A13FeatureAccessCN_T1TwitterSwift_h
@import Foundation;

@interface type metadata for Grok.GrokFeatureAccess (T1TwitterSwift)

/* class methods */
+ (id)featureAccessWithTwitterAccount:(id)account;
+ (_Bool)routesComplatPaywallForAccount:(id)account;
+ (_Bool)holdsTeamOrClaimedPlanForAccount:(id)account;
+ (_Bool)opensGrokWebSignedInForAccount:(id)account;
+ (_Bool)isFreeExperienceForAccount:(id)account;
+ (_Bool)isCurrentAccount:(id)account;
+ (void)grokBotUsageForAccount:(id)account completion:(id /* block */)completion;
+ (void)grokSignedInWebURLForURL:(id)url account:(id)account completion:(id /* block */)completion;
+ (id)complatMigrationIntroForAccount:(id)account referringPage:(id)page;

@end

#endif /* _$s4Grok0A13FeatureAccessCN_T1TwitterSwift_h */
