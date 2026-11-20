//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastOverflowMenuViewDelegate_Protocol_h
#define PTVBroadcastOverflowMenuViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOverflowMenuViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastOverflowMenuViewDidTapEmptySpace:(id)space;
- (void)broadcastOverflowMenuTitleViewDidTapHashtag:(id)hashtag;

@end

#endif /* PTVBroadcastOverflowMenuViewDelegate_Protocol_h */
