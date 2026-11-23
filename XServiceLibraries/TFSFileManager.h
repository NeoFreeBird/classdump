//
#ifndef TFSFileManager_h
#define TFSFileManager_h
@import Foundation;

@class NSObject, NSString;

@interface TFSFileManager : NSObject

@property (copy, nonatomic) NSString *applicationGroupIdentifier;

/* class methods */
+ (void)setMinimumIntervalBetweenLowDiskSpaceNotifications:(double)notifications;
+ (_Bool)isTooSoonForLowDiskSpaceNotification;
+ (id)sharedManager;
+ (id)createDirectoryIfNonExistent:(id)existent;
+ (id)directoryForSearchPath:(unsigned long long)path;
+ (id)cachesDirectory;
+ (id)documentsDirectory;
+ (id)libraryDirectory;
+ (id)subCacheDirectory:(id)directory;
+ (id)subDocumentsDirectory:(id)directory;
+ (id)composeAttachmentsDirectory;
+ (id)moviesDirectory;
+ (id)scribeCacheDirectory;
+ (id)applicationStateDirectory;
+ (id)applicationImportantStateDirectory;
+ (id)storedStreamsDirectory;
+ (id)crashlyticsTWCrashDirectory;
+ (id)configurationDirectory;
+ (id)authorizationRequestLogsDirectory;
+ (id)performanceDataDirectory;
+ (id)bugReportsDirectory;
+ (id)sentinelDirectory;
+ (struct { unsigned long long x0; unsigned long long x1; _Bool x2; })totalSizeOfDirectory:(id)directory;
+ (_Bool)parseComponentsOfAbsolutePath:(id)path searchPathDirectory:(out unsigned long long *)directory relativePath:(out id *)path;
+ (void)triggerLowDiskSpaceNotificationWithRateLimit;
+ (_Bool)fileExistsAtPath:(id)path;
+ (_Bool)directoryExistsAtPath:(id)path;
+ (_Bool)addAttributes:(id)attributes toDirectoryFilesAtPath:(id)path error:(id *)error;
+ (id)_tfs_errorWithErrorCode:(unsigned long long)code underlyingError:(id)error url:(id)url;
+ (id)_tfs_fileSystemQueue;
+ (_Bool)fileExistsAtURL:(id)url;
+ (_Bool)directoryExistsAtURL:(id)url;
+ (id)_tfs_deletedItemsDirectory;
+ (void)emptyDeletedItemsDirectory;
+ (_Bool)moveToDeletedItemsFolderThenDeleteItemAtURL:(id)url error:(id *)error;
+ (_Bool)removeItemAt:(id)at error:(id *)error;
+ (void)backgroundRemoveItemAt:(id)at;
+ (void)backgroundRemoveItemAt:(id)at completion:(id /* block */)completion;
+ (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;

/* instance methods */
- (id)initWithApplicationGroupIdentifier:(id)identifier;
- (id)subSharedContainerDirectory:(id)directory;
- (id)sharedDatabaseDirectory;
- (id)sharedDocumentsDirectory;
- (id)subSharedDocumentsDirectory:(id)directory;
- (id)sharedScribeDirectory;
- (id)sharedScribeFileURL;
- (id)sharedContainerDirectory;
- (id)sharedFailedCompositionsDirectory;

@end

#endif /* TFSFileManager_h */
