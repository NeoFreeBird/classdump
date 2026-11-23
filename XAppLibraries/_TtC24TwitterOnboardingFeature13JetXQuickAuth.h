//
#ifndef _TtC24TwitterOnboardingFeature13JetXQuickAuth_h
#define _TtC24TwitterOnboardingFeature13JetXQuickAuth_h
@import Foundation;

@class NSDictionary, NSObject, _$sSDyS2SG;

@interface TwitterOnboardingFeature.JetXQuickAuth : NSObject // (Swift)

@property (nonatomic, copy) NSDictionary *quickAuthPayload;
@property (nonatomic, readonly) NSDictionary *quickAuthAddExistingAccountPayload;

/* instance methods */
- (void)populateRecentAccountsIfAvailableWithCompletionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC24TwitterOnboardingFeature13JetXQuickAuth_h */
