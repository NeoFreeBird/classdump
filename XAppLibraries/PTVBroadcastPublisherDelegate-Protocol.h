//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastPublisherDelegate_Protocol_h
#define PTVBroadcastPublisherDelegate_Protocol_h
@import Foundation;

#include "PTVBroadcastControllerDelegate-Protocol.h"

@protocol PTVBroadcastPublisherDelegate <PTVBroadcastControllerDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)broadcastPublisherShouldUploadLogs:(id)logs;

@end

#endif /* PTVBroadcastPublisherDelegate_Protocol_h */
