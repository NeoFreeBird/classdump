//
#ifndef T1OnboardingBlockProtectedURLHandler_h
#define T1OnboardingBlockProtectedURLHandler_h
@import Foundation;

#include "OCFFlowURLHandler-Protocol.h"

@class NSObject, NSString;

@interface T1OnboardingBlockProtectedURLHandler : NSObject <OCFFlowURLHandler>

@property (copy, nonatomic) id /* block */ predicateBlock;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPredicateBlock:(id /* block */)block handlerBlock:(id /* block */)block;
- (_Bool)shouldHandleURL:(id)url;
- (void)handleURL:(id)url;

@end

#endif /* T1OnboardingBlockProtectedURLHandler_h */
