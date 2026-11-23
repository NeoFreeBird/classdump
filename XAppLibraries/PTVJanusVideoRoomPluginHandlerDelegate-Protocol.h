//
#ifndef PTVJanusVideoRoomPluginHandlerDelegate_Protocol_h
#define PTVJanusVideoRoomPluginHandlerDelegate_Protocol_h
@import Foundation;

#include "PTVJanusVideoRoomPluginHandlerObserver-Protocol.h"

@protocol PTVJanusVideoRoomPluginHandlerDelegate <PTVJanusVideoRoomPluginHandlerObserver>

@required

/* required instance methods */
- (void)videoRoomPluginHandler:(id)handler didAddLog:(id)log;

@optional

@end

#endif /* PTVJanusVideoRoomPluginHandlerDelegate_Protocol_h */
