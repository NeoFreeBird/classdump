//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OnboardingFlowMonitor_h
#define T1OnboardingFlowMonitor_h
@import Foundation;

#include "OCFFlow-Protocol.h"

@class NSMutableArray, NSMutableSet, NSObject, NSPointerArray, NSString, TFNTwitterAccount;

@interface T1OnboardingFlowMonitor : NSObject <OCFFlow> {
    /* instance variables */
    NSMutableArray *_completionHandlers;
    NSPointerArray *_monitoredFlows;
    NSMutableSet *_ownedFlows;
    id <OCFFlow> _finishingFlow;
}

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool flowInProgress;
@property (readonly, nonatomic) _Bool willViewAccountOnFlowCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)registerFlow:(id)flow keepAlive:(_Bool)alive;
- (void)unregisterFlow:(id)flow;
- (void)reset;
- (_Bool)isFlowInProgress;
- (void)completeFlowAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)addFlowCompletionObserver:(id)observer selector:(SEL)selector;
- (void)removeFlowCompletionObserver:(id)observer;
- (void)addFlowCompletionHandler:(id /* block */)handler;
- (id)private_inProgressFlows;
- (void)private_monitorFlow:(id)flow;
- (void)private_unmonitorFlow:(id)flow;
- (void)private_ownFlow:(id)flow;
- (void)private_disownFlow:(id)flow;
- (void)private_flowDidComplete:(id)complete;
- (void)private_recursivelyCompleteFlows:(id)flows animated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* T1OnboardingFlowMonitor_h */
