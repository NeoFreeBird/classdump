//
#ifndef TFSDependentConcurrentOperation_h
#define TFSDependentConcurrentOperation_h
@import Foundation;

#include "TFSConcurrentOperation.h"

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TFSDependentConcurrentOperation : TFSConcurrentOperation

@property (readonly, nonatomic) NSMapTable *dependenciesRequirements;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dependenciesRequirementsQueue;

/* instance methods */
- (id)init;
- (void)start;
- (void)addDependencies:(id)dependencies;
- (void)addDependency:(id)dependency withRequirements:(id)requirements;
- (void)addDependencies:(id)dependencies withRequirements:(id)requirements;
- (id)_tfs_background_requirementsForDependency:(id)dependency;
- (void)_tfs_background_addRequirements:(id)requirements forDependency:(id)dependency;

@end

#endif /* TFSDependentConcurrentOperation_h */
