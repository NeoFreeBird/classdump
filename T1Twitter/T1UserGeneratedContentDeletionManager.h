//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserGeneratedContentDeletionManager_h
#define T1UserGeneratedContentDeletionManager_h
@import Foundation;

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface T1UserGeneratedContentDeletionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deletionQueue;
@property (readonly, nonatomic) id /* block */ scribeProvider;
@property (readonly, nonatomic) id /* block */ modelServiceProvider;
@property (readonly, nonatomic) long long UGCDeleteLevel;
@property (readonly, nonatomic) _Bool didDeleteUGC;
@property (retain, nonatomic) NSArray *imagePipelines;

/* instance methods */
- (id)initWithUGCDeleteLevel:(long long)level scribeProvider:(id /* block */)provider modelServiceProvider:(id /* block */)provider;
- (void)deleteUserGeneratedContent;
- (void)_t1_deletionQueue_deleteUserGeneratedContent;
- (void)_t1_deletionQueue_deleteLocalFiles;
- (void)_t1_deletionQueue_deleteDrafts;
- (void)_t1_deletionQueue_deleteMediaCaches;
- (void)_t1_deleteDNSCache;
- (void)_t1_deletionQueue_deleteNetworkCaches;
- (void)_t1_deletionQueue_deleteDatabases;
- (void)_t1_setupImagePipelines;
- (void)_t1_deletionQueue_deleteTIPImageCaches;
- (id)_t1_scribe;
- (id)_t1_modelService;
- (_Bool)_t1_deletionQueue_purgeDirectory:(id)directory;

@end

#endif /* T1UserGeneratedContentDeletionManager_h */
