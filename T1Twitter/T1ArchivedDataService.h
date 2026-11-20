//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ArchivedDataService_h
#define T1ArchivedDataService_h
@import Foundation;

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface T1ArchivedDataService : NSObject

@property (retain, nonatomic) NSMutableSet *archivedDataSet;
@property (readonly, nonatomic) NSString *archivedDataCacheFile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialArchiveStateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialArchiveDiskQueue;
@property (readonly, nonatomic) id /* block */ initialLoadBlock;
@property (nonatomic) _Bool hasLoadedFromDisk;
@property (readonly, nonatomic) NSString *accountID;

/* class methods */
+ (id)sharedInstanceForAccountID:(id)id;
+ (id)registeredServices;
+ (id)archivedDataCacheDirectory;
+ (void)purgeAllDataFromDisk;
+ (void)purgeAllDataFromDiskSynchronously;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (void)archiveData:(id)data;
- (void)removeArchivedData:(id)data;
- (_Bool)doesArchiveDataExist:(id)exist;
- (void)saveDataToDisk;
- (void)_t1_stateQueue_saveDataToDisk;
- (void)_t1_stateQueue_pruneExpiredArchivedData;
- (void)_t1_waitForInitialLoadAndDoOnStateQueue:(id /* block */)queue;

@end

#endif /* T1ArchivedDataService_h */
