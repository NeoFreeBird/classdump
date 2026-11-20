//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatAccessManagerDelegate_Protocol_h
#define PTVChatAccessManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatAccessManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)chatAccessManager:(id)manager didLogEvent:(id)event;
- (void)chatAccessManager:(id)manager didUpdateChatAccess:(id)access previousChatAccess:(id)access;

@end

#endif /* PTVChatAccessManagerDelegate_Protocol_h */
