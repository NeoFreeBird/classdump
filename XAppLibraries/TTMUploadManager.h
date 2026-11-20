//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMUploadManager_h
#define TTMUploadManager_h
@import Foundation;

#include "TTMAssetUploaderDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol TNUNetworkQualityProvider, TTMUploadHighQualityImagesSettingsProvider;

@interface TTMUploadManager : NSObject <TTMAssetUploaderDelegate> {
    /* instance variables */
    NSMutableSet *_uploadersInProgress;
    NSMutableArray *_uploadersInQueue;
    id _idleTimerToken;
}

@property (retain, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider;
@property (retain, nonatomic) id <TTMUploadHighQualityImagesSettingsProvider> highQualityImagesSettingsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedMediaUploadManager;

/* instance methods */
- (id)init;
- (_Bool)uploadAsset:(id)asset fromAccountID:(id)id configDataSource:(id)source uploadSource:(long long)source networkTransactionMetrics:(id)metrics authenticateRequestHandler:(id /* block */)handler scribe:(id)scribe;
- (_Bool)uploadAssets:(id)assets fromAccountID:(id)id configDataSource:(id)source uploadSource:(long long)source networkTransactionMetrics:(id)metrics authenticateRequestHandler:(id /* block */)handler scribe:(id)scribe;
- (void)_startOrQueueUploader:(id)uploader;
- (void)cancelUploadForAssets:(id)assets;
- (void)cancelAllUploaders;
- (_Bool)_needTriggerUploader:(id)uploader accountID:(id)id;
- (void)_setupOrRemoveIdleTimerToken;
- (void)uploaderDidCompelete:(id)compelete success:(_Bool)success;

@end

#endif /* TTMUploadManager_h */
