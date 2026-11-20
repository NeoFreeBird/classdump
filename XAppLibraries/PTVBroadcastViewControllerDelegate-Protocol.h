//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastViewControllerDelegate_Protocol_h
#define PTVBroadcastViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastViewControllerDidSelectDismiss:(id)dismiss;

@end

#endif /* PTVBroadcastViewControllerDelegate_Protocol_h */
