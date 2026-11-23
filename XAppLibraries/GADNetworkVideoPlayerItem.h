//
#ifndef GADNetworkVideoPlayerItem_h
#define GADNetworkVideoPlayerItem_h
@import Foundation;

#include "GADAVPlayerItemProvider-Protocol.h"

@class AVPlayerItem, NSObject, NSString, NSURL;

@interface GADNetworkVideoPlayerItem : NSObject <GADAVPlayerItemProvider> {
    /* instance variables */
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
}

@property (readonly, nonatomic) _Bool gcacheUsed;
@property (readonly, nonatomic) _Bool gcacheHit;
@property (readonly, nonatomic) _Bool gcacheDownloaded;
@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic) long long cachedBytes;
@property (readonly, nonatomic) long long loadedBytes;
@property (readonly) NSString *MIMEType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoURL:(id)url;
- (id)playerItem;
- (id)videoURL;

@end

#endif /* GADNetworkVideoPlayerItem_h */
