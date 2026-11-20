//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h
#define TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAuthTimelineTokenStorageDelegate <NSObject>

@required

/* required instance methods */
- (void)setAuthTimelineToken:(id)token;
- (id)authTimelineToken;

@optional

@end

#endif /* TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h */
