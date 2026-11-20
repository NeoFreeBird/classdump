//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionStorageReport_h
#define TFNTwitterCompositionStorageReport_h
@import Foundation;

@class NSObject;

@interface TFNTwitterCompositionStorageReport : NSObject

@property (readonly, nonatomic) unsigned long long accountCount;
@property (readonly, nonatomic) unsigned long long compositionCount;
@property (readonly, nonatomic) unsigned long long referencedFileCount;
@property (readonly, nonatomic) unsigned long long missingFileCount;
@property (readonly, nonatomic) unsigned long long attachmentFileCount;
@property (readonly, nonatomic) unsigned long long attachmentFileSize;
@property (readonly, nonatomic) unsigned long long orphanFileCount;
@property (readonly, nonatomic) unsigned long long orphanFileSize;

/* class methods */
+ (void)scribeReportOncePerLaunchForPersistenceManagers:(id)managers scribe:(id)scribe;

/* instance methods */
- (id)_initWithAccountCount:(unsigned long long)count compositionCount:(unsigned long long)count attachmentsDirectory:(id)directory;
- (void)_scribeWithScribe:(id)scribe;

@end

#endif /* TFNTwitterCompositionStorageReport_h */
