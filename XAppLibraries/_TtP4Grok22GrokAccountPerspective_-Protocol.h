//
#ifndef _TtP4Grok22GrokAccountPerspective__Protocol_h
#define _TtP4Grok22GrokAccountPerspective__Protocol_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSArray, NSString, TFSAccountFeatureSwitches;

@protocol Grok.GrokAccountPerspective <TAPAccount.TAPAccountPerspective>

@required

@property (nonatomic, readonly) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (nonatomic, readonly) TFSAccountFeatureSwitches *accountFeatureSwitches;
@property (nonatomic, readonly) NSArray *subscriptionClaims;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) NSString *complatPlanNameForSuperGrok;
@property (nonatomic, readonly) NSString *complatPlanNameForSuperGrokPlus;
@property (nonatomic, readonly) NSString *complatPlanNameForSuperGrokHeavy;
@property (nonatomic, readonly) NSString *complatPlanNameForXPremium;
@property (nonatomic, readonly) NSString *complatPlanNameForXPremiumPlus;
@property (nonatomic, readonly) _Bool routesComplatPaywall;
@property (nonatomic, readonly) _Bool holdsTeamOrClaimedPlan;
@property (nonatomic, readonly) _Bool opensGrokWebSignedIn;
@property (nonatomic, readonly) _Bool isCurrentAccount;
@property (nonatomic, readonly) _Bool isFreeExperience;
@property (nonatomic, readonly) _Bool isGrokBotsEnabled;

@optional

/* optional instance methods */
- (void)grokBotUsageWithCompletion:(id /* block */)completion;
- (void)grokSignedInWebURLForURL:(id)url completion:(id /* block */)completion;
- (id)complatMigrationIntroWithReferringPage:(id)page;

@end

#endif /* _TtP4Grok22GrokAccountPerspective__Protocol_h */
