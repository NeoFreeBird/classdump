//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelService_h
#define TFSModelService_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TFSModelService : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 modelContextMap;
    B24@0:8@"NSString"16 configuration;
}

@property (nonatomic, readonly) NSDictionary *diagnostic_accountIDToModelCache;

/* instance methods */
- (id)initWithIdentifier:(id)identifier strictErrorLogger:(id)logger modelRegistryBuilder:(id)builder configuration:(id)configuration dependencyGraphLoggingEnabled:(_Bool)enabled;
- (id)modelContextForAccountID:(id)id;
- (void)removeCacheFilesAndContextsExceptAccountIDsInUse:(id)use;
- (void)forceRemoveAllCacheFilesSynchronously;
- (id)diagnostic_cacheConfigurationForAccountID:(id)id;
- (id)init;

@end

#endif /* TFSModelService_h */
