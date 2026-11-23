//
#ifndef _TtC38TwitterOnboardingFeatureImplementation38TwitterOnboardingFeatureImplementation_h
#define _TtC38TwitterOnboardingFeatureImplementation38TwitterOnboardingFeatureImplementation_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"
#include "_TtP24TwitterOnboardingFeature17OnboardingFeature_-Protocol.h"

@class NSString, _$sSS, _TtCs12_SwiftObject;

@interface TwitterOnboardingFeatureImplementation.TwitterOnboardingFeatureImplementation : Swift._SwiftObject <TwitterOnboardingFeature.OnboardingFeature, TFSTwitterFeature> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (_Bool)isFeatureImplemented;
- (id)flowAssistantWithFlowSpec:(id)spec;
- (id)flowAssistantWithFlowSpec:(id)spec account:(id)account;
- (id)flowAssistantWithFlowSpec:(id)spec account:(id)account flowObserver:(id)observer options:(long long)options taskServiceProvider:(id /* block */)provider;
- (id)flowControllerWithService:(id)service account:(id)account flowObserver:(id)observer;
- (_Bool)isFlowShowing;
- (id)presenterWithNavigationController:(id)controller presentationType:(long long)type;
- (id)presenterWithPresentingViewController:(id)controller cancellable:(_Bool)cancellable;
- (id)presenterWithPresentingViewController:(id)controller;
- (id)embeddedFlowViewProviderWithDictionary:(id)dictionary account:(id)account shouldUseCompactLayout:(_Bool)layout hostsActionButtons:(_Bool)buttons shouldAlwaysDismissBeforeOpeningLinks:(_Bool)links shouldAnimateViewControllerPushes:(_Bool)pushes updateAction:(id /* block */)action dismissAction:(id /* block */)action;
- (id)playgroundViewControllerWithAccount:(id)account;
- (id)ctaHalfCoverTrayWithTitle:(id)title body:(id)body detail:(id)detail primaryTitle:(id)title secondaryTitle:(id)title;
- (id)permissionHalfCoverTrayWithTitle:(id)title body:(id)body detail:(id)detail primaryTitle:(id)title secondaryTitle:(id)title;
- (id)menuDialogTrayWithTitle:(id)title rowTitles:(id)titles cancelTitle:(id)title;
- (id)followSheetTrayWithTitle:(id)title body:(id)body buttonTitle:(id)title;
- (id)usernameSettingsViewControllerWithAccount:(id)account scribeContext:(id)context;
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;

@end

#endif /* _TtC38TwitterOnboardingFeatureImplementation38TwitterOnboardingFeatureImplementation_h */
