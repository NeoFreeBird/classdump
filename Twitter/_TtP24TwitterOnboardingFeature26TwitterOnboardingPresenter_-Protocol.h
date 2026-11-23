//
#ifndef _TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter__Protocol_h
#define _TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter__Protocol_h
@import Foundation;

@class UIWindow;

@protocol TwitterOnboardingFeature.TwitterOnboardingPresenter

@required

@property (nonatomic, readonly) UIWindow *currentWindow;

/* required instance methods */
- (void)dismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)openWebURL:(id)url withTitle:(id)title forAccount:(id)account chromeless:(_Bool)chromeless;

@optional

@end

#endif /* _TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter__Protocol_h */
