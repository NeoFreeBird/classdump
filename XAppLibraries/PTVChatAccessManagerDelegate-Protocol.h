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
