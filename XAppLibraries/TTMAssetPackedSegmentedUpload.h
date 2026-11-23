//
#ifndef TTMAssetPackedSegmentedUpload_h
#define TTMAssetPackedSegmentedUpload_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetPackedSegmentedUploadOperation.h"
#include "TTMAssetPackedSegmentedUploadOperationDelegate-Protocol.h"
#include "TTMAssetUpload-Protocol.h"
#include "TTMAssetUploadDelegate-Protocol.h"
#include "TTMAssetUploadFlowLogger.h"
#include "TTMUploadConfiguration.h"

@class NSObject, NSOperationQueue, NSString, NSUUID, TNUTransactionMetrics;
@protocol TNUNetworkQualityProvider, TTMUploadHighQualityImagesSettingsProvider;

@interface TTMAssetPackedSegmentedUpload : NSObject <TTMAssetPackedSegmentedUploadOperationDelegate, TTMAssetUpload>

@property (readonly, nonatomic) TTMUploadConfiguration *configuration;
@property (readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider;
@property (readonly, nonatomic) TNUTransactionMetrics *networkTransactionMetrics;
@property (readonly, nonatomic) id <TTMUploadHighQualityImagesSettingsProvider> highQualityImagesSettingsProvider;
@property (nonatomic) _Bool started;
@property (nonatomic) long long uploadPhase;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) TTMAssetPackedSegmentedUploadOperation *uploadOperation;
@property (readonly, nonatomic) id /* block */ authenticateRequestHandler;
@property (copy, nonatomic) NSString *failedUploadMediaID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) TTMAsset *asset;
@property (readonly, nonatomic) unsigned long long status;
@property (weak, nonatomic) id <TTMAssetUploadDelegate> delegate;
@property (readonly, nonatomic) TTMAssetUploadFlowLogger *flowLogger;
@property (readonly, nonatomic) long long uploadSource;
@property (readonly, nonatomic) float progress;

/* instance methods */
- (id)initWithAccountID:(id)id scribe:(id)scribe identifier:(id)identifier configuration:(id)configuration asset:(id)asset uploadSource:(long long)source networkQualityProvider:(id)provider networkTransactionMetrics:(id)metrics highQualityImagesSettingsProvider:(id)provider flowLogger:(id)logger authenticateRequestHandler:(id /* block */)handler;
- (_Bool)start;
- (void)cancel;
- (void)_ttm_main_startUploadOperationWithAttemptAfterRetry:(_Bool)retry;
- (void)_ttm_main_uploadOperationDidComplete;
- (void)packedSegmentedUploadOperation:(id)operation didProgress:(float)progress phase:(long long)phase;
- (void)packedSegmentedUploadOperation:(id)operation didUpdateMediaID:(id)id expiryDate:(id)date;

@end

#endif /* TTMAssetPackedSegmentedUpload_h */
