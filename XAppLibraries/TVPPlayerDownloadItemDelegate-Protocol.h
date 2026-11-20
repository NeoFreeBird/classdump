//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPPlayerDownloadItemDelegate_Protocol_h
#define TVPPlayerDownloadItemDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TVPPlayerDownloadItemDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)playerDownloadItemDidFinish:(id)finish;

@end

#endif /* TVPPlayerDownloadItemDelegate_Protocol_h */
