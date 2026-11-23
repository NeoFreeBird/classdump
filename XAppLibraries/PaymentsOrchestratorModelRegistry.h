//
#ifndef PaymentsOrchestratorModelRegistry_h
#define PaymentsOrchestratorModelRegistry_h
@import Foundation;

@class NSObject;

@interface PaymentsOrchestratorModelRegistry : NSObject // (Swift)

/* class methods */
+ (void)registerModelsWithRegistryBuilder:(id)builder;

/* instance methods */
- (id)init;

@end

#endif /* PaymentsOrchestratorModelRegistry_h */
