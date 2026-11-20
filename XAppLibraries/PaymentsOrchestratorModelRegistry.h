//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
