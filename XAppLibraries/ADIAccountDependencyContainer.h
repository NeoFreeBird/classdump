//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ADIAccountDependencyContainer_h
#define ADIAccountDependencyContainer_h
@import Foundation;

@class NSObject;

@interface ADIAccountDependencyContainer : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 dependencyContainer;
}

/* instance methods */
- (id)fetchService:(long long)service;
- (id)initWithAccountID:(id)id error:(id *)error;
- (id)init;

@end

#endif /* ADIAccountDependencyContainer_h */
