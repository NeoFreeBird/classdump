//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP24TwitterOnboardingFeature17OnboardingFeature__Protocol_h
#define _TtP24TwitterOnboardingFeature17OnboardingFeature__Protocol_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@protocol TwitterOnboardingFeature.OnboardingFeature <TFSTwitterFeature>

@required

/* required instance methods */
- (_Bool)isFeatureImplemented;
- (id)flowAssistantWithFlowSpec:(id)spec;
- (id)flowAssistantWithFlowSpec:(id)spec account:(id)account;
- (id)flowAssistantWithFlowSpec:(id)spec account:(id)account flowObserver:(id)observer options:(long long)options taskServiceProvider:(id /* block */)provider;
- (id)flowControllerWithService:(id)service account:(id)account flowObserver:(id)observer;
- (_Bool)isFlowShowing;
- (id)presenterWithNavigationController:(id)controller presentationType:(long long)type;
- (id)presenterWithPresentingViewController:(id)controller;
- (id)presenterWithPresentingViewController:(id)controller cancellable:(_Bool)cancellable;
- (id)embeddedFlowViewProviderWithDictionary:(id)dictionary account:(id)account shouldUseCompactLayout:(_Bool)layout hostsActionButtons:(_Bool)buttons shouldAlwaysDismissBeforeOpeningLinks:(_Bool)links shouldAnimateViewControllerPushes:(_Bool)pushes updateAction:(id /* block */)action dismissAction:(id /* block */)action;
- (id)playgroundViewControllerWithAccount:(id)account;
- (id)ctaHalfCoverTrayWithTitle:(id)title body:(id)body detail:(id)detail primaryTitle:(id)title secondaryTitle:(id)title;
- (id)permissionHalfCoverTrayWithTitle:(id)title body:(id)body detail:(id)detail primaryTitle:(id)title secondaryTitle:(id)title;
- (id)menuDialogTrayWithTitle:(id)title rowTitles:(id)titles cancelTitle:(id)title;
- (id)followSheetTrayWithTitle:(id)title body:(id)body buttonTitle:(id)title;
- (id)usernameSettingsViewControllerWithAccount:(id)account scribeContext:(id)context;

@optional

@end

#endif /* _TtP24TwitterOnboardingFeature17OnboardingFeature__Protocol_h */
