//
#ifndef TTMUploadConfiguration_h
#define TTMUploadConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TTMUploadConfigurationDataSource-Protocol.h"
#include "TTMUploadConfigurationSettings-Protocol.h"

@class NSObject, NSString, TIPImagePipeline;

@interface TTMUploadConfiguration : NSObject <TTMUploadConfigurationDataSource, TTMUploadConfigurationSettings, NSCopying>

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) _Bool photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForPoorNetwork;
@property (readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForGoodNetwork;
@property (readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForGreatNetwork;
@property (readonly, nonatomic) long long photosSegmentedUploadMinimumSegmentSize;
@property (readonly, nonatomic) long long photosSegmentedUploadMaxiumRetryPerRequest;
@property (readonly, nonatomic) long long photoHighBandwidthUploadDimension;
@property (readonly, nonatomic) long long photoMediumBandwidthUploadDimension;
@property (readonly, nonatomic) long long photoLowBandwidthUploadDimension;
@property (readonly, nonatomic) long long photoLosslessCompressionMaximumResolution;
@property (readonly, nonatomic) _Bool photoUploadHighQualityImagesSettingIsVisible;
@property (readonly, nonatomic) long long photoUploadHighQualityImagesUploadDefaultResolution;
@property (readonly, nonatomic) unsigned long long photoUploadMaxRetryCount;
@property (readonly, nonatomic) _Bool videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForPoorNetwork;
@property (readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForGoodNetwork;
@property (readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForGreatNetwork;
@property (readonly, nonatomic) long long videosSegmentedUploadMinimumSegmentSize;
@property (readonly, nonatomic) long long videosSegmentedUploadMaxiumRetryPerRequest;
@property (readonly, nonatomic) long long mediaUploadGroupPolicy;
@property (readonly, nonatomic) double mediaAsyncUploadAmplifyThreshold;
@property (readonly, nonatomic) long long mediaAsyncUploadNumberOfHTTPRequestsToPack;
@property (readonly, nonatomic) unsigned long long mediaAsyncUploadMaxGifSizeInMBs;
@property (readonly, nonatomic) _Bool mediaAsyncUploadSendTotalBytesInFinalize;
@property (readonly, nonatomic) long long mediaAsyncUploadMaxConcurrentAppendRequestsForPoorNetwork;
@property (readonly, nonatomic) long long mediaAsyncUploadMaxConcurrentAppendRequestsForGoodNetwork;
@property (readonly, nonatomic) long long mediaAsyncUploadMaxConcurrentAppendRequestsForGreatNetwork;
@property (readonly, nonatomic) long long mediaAsyncUploadConcurrentAppendTimeoutsBeforeBackoff;
@property (readonly, nonatomic) _Bool mediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
@property (readonly, copy, nonatomic) id /* block */ mediaAsyncUploadParallelAppendExposureHandler;
@property (readonly, nonatomic) _Bool mediaUploadLocalTweetVideoPerformanceLoggingEnabled;
@property (readonly, nonatomic) _Bool mediaUploadAllPerformanceLoggingEnabled;
@property (readonly, nonatomic) _Bool dmPerformanceMediaLoggingEnabled;
@property (readonly, nonatomic) _Bool mediaUploadHashingEnabled;
@property (readonly, nonatomic) _Bool profileImageUploadHashingEnabled;
@property (readonly, nonatomic) _Bool mediaUploadVideoSourceValidationEnabled;
@property (readonly, nonatomic) _Bool mediaUploadMediaServicesResetRecoveryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool isUploadFullHDVideoEnabled;
@property (readonly, nonatomic) _Bool isUploadFullHDVideoEnabledByDefault;
@property (readonly, nonatomic) _Bool isUpload4kVideoEnabled;
@property (readonly, nonatomic) _Bool isUpload4kVideoEnabledByDefault;
@property (readonly, nonatomic) _Bool isVideoTranscodeReactionsOptimizationEnabled;

/* class methods */
+ (void)setConfigurationProvider:(id)provider;
+ (id)configurationForDataSource:(id)source;

/* instance methods */
- (id)init;
- (id)initWithDataSource:(id)source settings:(id)settings;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isUploadFullHDVideoEnabledForAsset:(id)asset;
- (_Bool)isUpload4kVideoEnabledForAsset:(id)asset;
- (_Bool)isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isMediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
- (_Bool)isDmPerformanceMediaLoggingEnabled;
- (_Bool)isMediaUploadAllPerformanceLoggingEnabled;
- (_Bool)isMediaUploadLocalTweetVideoPerformanceLoggingEnabled;
- (_Bool)isMediaUploadHashingEnabled;
- (_Bool)isProfileImageUploadHashingEnabled;
- (_Bool)isMediaUploadVideoSourceValidationEnabled;
- (_Bool)isMediaUploadMediaServicesResetRecoveryEnabled;

@end

#endif /* TTMUploadConfiguration_h */
