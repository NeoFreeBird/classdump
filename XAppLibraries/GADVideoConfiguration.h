//
#ifndef GADVideoConfiguration_h
#define GADVideoConfiguration_h
@import Foundation;

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADVideoConfiguration : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (readonly, nonatomic) _Bool enableAVPlayerPlaybackBuffering;
@property (readonly, nonatomic) _Bool enableAdvanceBufferingControl;
@property (readonly, nonatomic) _Bool enableInMemoryVideoBuffer;
@property (readonly, nonatomic) long long precacheMaxBufferBytes;
@property (readonly, nonatomic) double videoAssetLoaderMaxDownloadWaitTimeInterval;
@property (readonly, nonatomic) long long videoAssetLoaderMaxContentSizeInBytes;
@property (readonly, nonatomic) long long videoAssetMaxLoadableChunkSizeInBytes;
@property (readonly, nonatomic) long long assetLoadingPlayerItemMaxContentLoadingFailedAttempts;
@property (readonly, nonatomic) long long assetLoadingPlayerItemMaxDataLoadingFailedAttempts;
@property (readonly, nonatomic) double assetLoadingPlayerItemRefreshInterval;
@property (readonly, nonatomic) long long assetLoadingPlayerItemNoBufferUpdateMaxContentSize;
@property (readonly, nonatomic) _Bool videoBufferShouldIgnoreCanPlayThrough;
@property (readonly, nonatomic) double precacheUpdateCheckIntervals;
@property (readonly, nonatomic) long long videoPlayerID;
@property (readonly) double minBufferTimeInterval;
@property (readonly) double maxBufferTimeInterval;
@property (readonly) double bufferForPlaybackTimeInterval;
@property (readonly) double bufferForPlaybackAfterRebufferTimeInterval;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (void)updateDynamicConfigurationWithDictionary:(id)dictionary;
- (void)loadStaticSettingsWithDictionary:(id)dictionary;
- (void)loadDynamicSettingsWithDictionary:(id)dictionary;
- (id)dictionary;

@end

#endif /* GADVideoConfiguration_h */
