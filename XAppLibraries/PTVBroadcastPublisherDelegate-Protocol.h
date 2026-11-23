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
