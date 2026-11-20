//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAVPlayerItemProvider_Protocol_h
#define GADAVPlayerItemProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol GADAVPlayerItemProvider <NSObject>

@required

@property (readonly, nonatomic) _Bool gcacheUsed;
@property (readonly, nonatomic) _Bool gcacheHit;
@property (readonly, nonatomic) _Bool gcacheDownloaded;
@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic) long long cachedBytes;
@property (readonly, nonatomic) long long loadedBytes;
@property (readonly) NSString *MIMEType;

/* required instance methods */
- (id)videoURL;
- (id)playerItem;

@optional

@end

#endif /* GADAVPlayerItemProvider_Protocol_h */
