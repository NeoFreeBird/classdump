//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastOverflowViewDelegate_Protocol_h
#define PTVBroadcastOverflowViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastOverflowViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastOverflowViewDidSelectDismiss:(id)dismiss;
- (void)broadcastOverflowViewDidSelectBack:(id)back;

@end

#endif /* PTVBroadcastOverflowViewDelegate_Protocol_h */
