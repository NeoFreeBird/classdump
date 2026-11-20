//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFeatureRegistry_h
#define TFSTwitterFeatureRegistry_h
@import Foundation;

@class NSObject;

@interface TFSTwitterFeatureRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 features;
}

/* instance methods */
- (id)initWithFeatures:(id)features;
- (id)featureForIdentifier:(id)identifier;
- (void)removedAccountWithAccountID:(id)id;
- (id)featureAccountScopedDataWithAccountContext:(id)context;
- (id)init;

@end

#endif /* TFSTwitterFeatureRegistry_h */
