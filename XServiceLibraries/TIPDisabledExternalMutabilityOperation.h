//
#ifndef TIPDisabledExternalMutabilityOperation_h
#define TIPDisabledExternalMutabilityOperation_h
@import Foundation;

#include "TIPDependencyOperation-Protocol.h"
#include "TIPSafeOperation.h"

@class NSString;

@interface TIPDisabledExternalMutabilityOperation : TIPSafeOperation <TIPDependencyOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_tip_addDependency:(id)dependency;
- (void)makeDependencyOfTargetOperation:(id)operation;
- (void)cancel;
- (void)addDependency:(id)dependency;
- (void)removeDependency:(id)dependency;
- (void)setQueuePriority:(long long)priority;
- (void)setCompletionBlock:(id /* block */)block;
- (void)setThreadPriority:(double)priority;
- (void)setQualityOfService:(long long)service;

@end

#endif /* TIPDisabledExternalMutabilityOperation_h */
