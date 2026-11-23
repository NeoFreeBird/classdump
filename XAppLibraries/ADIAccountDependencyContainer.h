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
