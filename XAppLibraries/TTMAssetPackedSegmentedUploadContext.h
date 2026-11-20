//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadContext_h
#define TTMAssetPackedSegmentedUploadContext_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetUploadFlowLogger.h"
#include "TTMUploadConfiguration.h"

@class NSNumber, NSObject, NSString, NSUUID, TNUTransactionMetrics;
@protocol TNUNetworkQualityProvider, TTMUploadHighQualityImagesSettingsProvider;

@interface TTMAssetPackedSegmentedUploadContext : NSObject

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) TTMUploadConfiguration *configuration;
@property (readonly, nonatomic) TTMAsset *asset;
@property (readonly, nonatomic) long long uploadSource;
@property (readonly, nonatomic) TNUTransactionMetrics *networkTransactionMetrics;
@property (readonly, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider;
@property (readonly, nonatomic) id <TTMUploadHighQualityImagesSettingsProvider> highQualityImagesSettingsProvider;
@property (readonly, nonatomic) TTMAssetUploadFlowLogger *flowLogger;
@property (readonly, nonatomic) long long numberOfHTTPRequestsToPack;
@property (readonly, nonatomic) unsigned long long segmentSize;
@property (readonly, nonatomic) unsigned long long minimumSegmentSize;
@property (readonly, nonatomic) _Bool segmentSizeBackoffEnabled;
@property (readonly, nonatomic) _Bool sendTotalBytesInFinalize;
@property (readonly, nonatomic) unsigned long long maxConcurrentAppendRequests;
@property (readonly, nonatomic) unsigned long long concurrentAppendTimeoutsBeforeBackoff;
@property (readonly, nonatomic) _Bool parallelAppendSegmentSizeBackoffEnabled;
@property (readonly, nonatomic) _Bool sourceURLAsyncUploadEnabled;
@property (readonly, nonatomic) unsigned long long permittedRequestRetryCount;
@property (readonly, nonatomic) double requestRetryDelay;
@property (readonly, copy, nonatomic) NSString *mimeTypeParameter;
@property (readonly, copy, nonatomic) NSString *mediaCategoryParameter;
@property (readonly, copy, nonatomic) NSString *TTLParameter;
@property (readonly, nonatomic) _Bool allowAsyncParameter;
@property (readonly, nonatomic) _Bool isVoiceParameter;
@property (readonly, nonatomic) _Bool canUploadFullHDVideo;
@property (readonly, nonatomic) _Bool canUpload4kVideo;
@property (readonly, nonatomic) NSNumber *durationInMilliseconds;
@property (readonly, nonatomic) id /* block */ authenticateRequestHandler;

/* instance methods */
- (id)init;
- (id)initWithAccountID:(id)id scribe:(id)scribe identifier:(id)identifier configuration:(id)configuration asset:(id)asset networkTransactionMetrics:(id)metrics uploadSource:(long long)source networkQualityProvider:(id)provider highQualityImagesSettingsProvider:(id)provider flowLogger:(id)logger authenticateRequestHandler:(id /* block */)handler;
- (void)dealloc;
- (void)recordParallelAppendExposure;
- (_Bool)isSegmentSizeBackoffEnabled;
- (_Bool)isParallelAppendSegmentSizeBackoffEnabled;
- (_Bool)isSourceURLAsyncUploadEnabled;

@end

#endif /* TTMAssetPackedSegmentedUploadContext_h */
