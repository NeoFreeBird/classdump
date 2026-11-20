//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetsUploader_h
#define TTMAssetsUploader_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTMAssetUploaderDelegate-Protocol.h"
#include "TTMUploadConfiguration.h"

@class NSArray, NSMutableSet, NSObject, NSString, NSUUID, TNUTransactionMetrics;
@protocol TNUNetworkQualityProvider, TTMUploadHighQualityImagesSettingsProvider;

@interface TTMAssetsUploader : NSObject {
    /* instance variables */
    NSMutableSet *_uploadSessions;
    long long _uploadPolicy;
    unsigned long long _currentAssetIndexForSequentialUpload;
    NSUUID *_identifier;
    unsigned long long _successCount;
    unsigned long long _failureCount;
    unsigned long long _cancelCount;
    TTMUploadConfiguration *_configuration;
    TNUTransactionMetrics *_networkTransactionMetrics;
}

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) NSArray *assets;
@property (nonatomic) long long source;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (retain, nonatomic) id <TTMUploadHighQualityImagesSettingsProvider> highQualityImagesSettingsProvider;
@property (retain, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider;
@property (weak, nonatomic) id <TTMAssetUploaderDelegate> delegate;
@property (readonly, nonatomic) id /* block */ authenticateRequestHandler;

/* instance methods */
- (id)init;
- (id)initWithAssetsArray:(id)array accountID:(id)id scribe:(id)scribe configuration:(id)configuration networkTransactionMetrics:(id)metrics authenticateRequestHandler:(id /* block */)handler;
- (_Bool)start;
- (void)cancel;
- (void)_uploadDidComplete:(id)complete;
- (void)_uploaderDidComplete;
- (_Bool)_uploadAsset:(id)asset;
- (_Bool)_uploadNextAsset;
- (void)_uploadProgressDidUpdate:(id)update;
- (void)_updateUploadPolicy;
- (void)_incrementUploadResultsCount:(id)count asset:(id)asset;
- (void)_scribeUploaderResults;

@end

#endif /* TTMAssetsUploader_h */
