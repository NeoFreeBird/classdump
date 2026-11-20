//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoAssetLoader_h
#define GADVideoAssetLoader_h
@import Foundation;

#include "GADResourceBuffer.h"
#include "GADVideoConfiguration.h"

@class NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface GADVideoAssetLoader : NSObject {
    /* instance variables */
    NSURL *_sourceURL;
    GADResourceBuffer *_mainResourceBuffer;
    GADVideoConfiguration *_videoConfiguration;
    long long _resourceBufferStartingByteOffset;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADResourceBuffer *_resourceBuffer;
    unsigned long long _replacedBuffersBufferedContentSize;
    long long _maxContentLength;
    NSString *_cachedContentType;
}

@property (readonly, nonatomic) unsigned long long mainBufferedContentSize;
@property (readonly, nonatomic) unsigned long long loadedBytes;
@property (readonly, nonatomic) _Bool mainBufferDownloaded;
@property (readonly, nonatomic) long long contentLength;
@property (readonly, copy, nonatomic) NSString *contentType;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithVideoURL:(id)url resourceBuffer:(id)buffer videoConfiguration:(id)configuration;
- (_Bool)getResourceBuffer:(id *)buffer startingByteOffset:(long long *)offset loadingByteOffset:(long long)offset error:(id *)error;
- (void)finishedUsingResourceBuffer:(id)buffer;

@end

#endif /* GADVideoAssetLoader_h */
