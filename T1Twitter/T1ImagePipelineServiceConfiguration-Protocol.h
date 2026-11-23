//
#ifndef T1ImagePipelineServiceConfiguration_Protocol_h
#define T1ImagePipelineServiceConfiguration_Protocol_h
@import Foundation;

@protocol T1ImagePipelineServiceConfiguration

@required

@property long long maxBytesForAllRenderedCaches;
@property long long maxBytesForAllMemoryCaches;
@property long long maxBytesForAllDiskCaches;
@property long long maxRatioSizeOfCacheEntry;
@property long long maxConcurrentImagePipelineDownloadCount;
@property (nonatomic) _Bool serializeCGContextAccess;
@property (nonatomic) _Bool clearMemoryCachesOnApplicationBackgroundEnabled;

/* required instance methods */
- (void)addImagePipelineObserver:(id)observer;
- (_Bool)isClearMemoryCachesOnApplicationBackgroundEnabled;

@optional

@end

#endif /* T1ImagePipelineServiceConfiguration_Protocol_h */
