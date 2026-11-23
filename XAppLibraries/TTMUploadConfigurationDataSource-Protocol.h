//
#ifndef TTMUploadConfigurationDataSource_Protocol_h
#define TTMUploadConfigurationDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TIPImagePipeline;

@protocol TTMUploadConfigurationDataSource <NSObject>

@required

@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) _Bool photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (nonatomic, readonly) _Bool photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (nonatomic, readonly) long long photosSegmentedUploadSegmentSizeForPoorNetwork;
@property (nonatomic, readonly) long long photosSegmentedUploadSegmentSizeForGoodNetwork;
@property (nonatomic, readonly) long long photosSegmentedUploadSegmentSizeForGreatNetwork;
@property (nonatomic, readonly) long long photosSegmentedUploadMinimumSegmentSize;
@property (nonatomic, readonly) long long photosSegmentedUploadMaxiumRetryPerRequest;
@property (nonatomic, readonly) long long photoHighBandwidthUploadDimension;
@property (nonatomic, readonly) long long photoMediumBandwidthUploadDimension;
@property (nonatomic, readonly) long long photoLowBandwidthUploadDimension;
@property (nonatomic, readonly) long long photoLosslessCompressionMaximumResolution;
@property (nonatomic, readonly) _Bool photoUploadHighQualityImagesSettingIsVisible;
@property (nonatomic, readonly) long long photoUploadHighQualityImagesUploadDefaultResolution;
@property (nonatomic, readonly) unsigned long long photoUploadMaxRetryCount;
@property (nonatomic, readonly) _Bool videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (nonatomic, readonly) _Bool videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property (nonatomic, readonly) long long videosSegmentedUploadSegmentSizeForPoorNetwork;
@property (nonatomic, readonly) long long videosSegmentedUploadSegmentSizeForGoodNetwork;
@property (nonatomic, readonly) long long videosSegmentedUploadSegmentSizeForGreatNetwork;
@property (nonatomic, readonly) long long videosSegmentedUploadMinimumSegmentSize;
@property (nonatomic, readonly) long long videosSegmentedUploadMaxiumRetryPerRequest;
@property (nonatomic, readonly) long long mediaUploadGroupPolicy;
@property (nonatomic, readonly) double mediaAsyncUploadAmplifyThreshold;
@property (nonatomic, readonly) long long mediaAsyncUploadNumberOfHTTPRequestsToPack;
@property (nonatomic, readonly) unsigned long long mediaAsyncUploadMaxGifSizeInMBs;
@property (nonatomic, readonly) _Bool mediaAsyncUploadSendTotalBytesInFinalize;
@property (nonatomic, readonly) long long mediaAsyncUploadMaxConcurrentAppendRequestsForPoorNetwork;
@property (nonatomic, readonly) long long mediaAsyncUploadMaxConcurrentAppendRequestsForGoodNetwork;
@property (nonatomic, readonly) long long mediaAsyncUploadMaxConcurrentAppendRequestsForGreatNetwork;
@property (nonatomic, readonly) long long mediaAsyncUploadConcurrentAppendTimeoutsBeforeBackoff;
@property (nonatomic, readonly) _Bool mediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
@property (nonatomic, readonly) _Bool mediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
@property (nonatomic, readonly) id /* block */ mediaAsyncUploadParallelAppendExposureHandler;
@property (nonatomic, readonly) _Bool mediaUploadLocalTweetVideoPerformanceLoggingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadLocalTweetVideoPerformanceLoggingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadAllPerformanceLoggingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadAllPerformanceLoggingEnabled;
@property (nonatomic, readonly) _Bool dmPerformanceMediaLoggingEnabled;
@property (nonatomic, readonly) _Bool dmPerformanceMediaLoggingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadHashingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadHashingEnabled;
@property (nonatomic, readonly) _Bool profileImageUploadHashingEnabled;
@property (nonatomic, readonly) _Bool profileImageUploadHashingEnabled;
@property (nonatomic, readonly) _Bool mediaUploadVideoSourceValidationEnabled;
@property (nonatomic, readonly) _Bool mediaUploadVideoSourceValidationEnabled;
@property (nonatomic, readonly) _Bool mediaUploadMediaServicesResetRecoveryEnabled;
@property (nonatomic, readonly) _Bool mediaUploadMediaServicesResetRecoveryEnabled;

/* required instance methods */
- (_Bool)isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (_Bool)isMediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
- (_Bool)isMediaAsyncUploadParallelAppendSegmentSizeBackoffEnabled;
- (_Bool)isMediaUploadLocalTweetVideoPerformanceLoggingEnabled;
- (_Bool)isMediaUploadLocalTweetVideoPerformanceLoggingEnabled;
- (_Bool)isMediaUploadAllPerformanceLoggingEnabled;
- (_Bool)isMediaUploadAllPerformanceLoggingEnabled;
- (_Bool)isDmPerformanceMediaLoggingEnabled;
- (_Bool)isDmPerformanceMediaLoggingEnabled;
- (_Bool)isMediaUploadHashingEnabled;
- (_Bool)isMediaUploadHashingEnabled;
- (_Bool)isProfileImageUploadHashingEnabled;
- (_Bool)isProfileImageUploadHashingEnabled;
- (_Bool)isMediaUploadVideoSourceValidationEnabled;
- (_Bool)isMediaUploadVideoSourceValidationEnabled;
- (_Bool)isMediaUploadMediaServicesResetRecoveryEnabled;
- (_Bool)isMediaUploadMediaServicesResetRecoveryEnabled;

@optional

@end

#endif /* TTMUploadConfigurationDataSource_Protocol_h */
