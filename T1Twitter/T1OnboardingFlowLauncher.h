//
#ifndef T1OnboardingFlowLauncher_h
#define T1OnboardingFlowLauncher_h
@import Foundation;

#include "OCFFlowStateObserver-Protocol.h"

@class NSObject, NSString;

@interface T1OnboardingFlowLauncher : NSObject <OCFFlowStateObserver>

@property (readonly, copy, nonatomic) id /* block */ accountProvider;
@property (retain, nonatomic) id flowController;
@property (copy, nonatomic) id /* block */ flowCompletion;
@property (copy, nonatomic) id /* block */ abortCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountProvider:(id /* block */)provider;
- (id)init;
- (void)showOnboardingFlowWithFlowSpec:(id)spec completion:(id /* block */)completion flowCompletion:(id /* block */)completion preparationBlock:(id /* block */)block presenterProviderBlock:(id /* block */)block;
- (void)flow:(id)flow stateDidChange:(long long)change withAccount:(id)account flowStatus:(long long)status;
- (void)flow:(id)flow didFinishTaskWithNavigationLink:(id)link;

@end

#endif /* T1OnboardingFlowLauncher_h */
