//
#ifndef _TtC18XGoLiveBroadcaster24BroadcastDetailsProvider_h
#define _TtC18XGoLiveBroadcaster24BroadcastDetailsProvider_h
@import Foundation;

#include "PTVChatControllerObserver-Protocol.h"

@class NSObject, Swift.Bool, XGoLive.GoLiveBroadcastDetailsLoadState, XGoLive.GoLiveBroadcastDetailsLoadState _$scSg ->, XGoLiveBroadcaster.LiveMediaBroadcastClient ?, _$sSo21PTVBroadcastPublisherC;

@interface XGoLiveBroadcaster.BroadcastDetailsProvider : NSObject <PTVChatControllerObserver> { // (Swift)
    /* instance variables */
    XGoLive.GoLiveBroadcastDetailsLoadState state;
    XGoLive.GoLiveBroadcastDetailsLoadState _$scSg -> onStateChange;
    __C.PTVBroadcastPublisher publisher;
    XGoLiveBroadcaster.LiveMediaBroadcastClient ? liveMediaSession;
    Swift.Bool isObserving;
}

/* instance methods */
- (void)chatController:(id)controller didReceiveBroadcastViewersAndStats:(id)stats;
- (void)chatController:(id)controller didReceiveChatRoomPresenceEvent:(id)event;
- (void)chatControllerConnectionDidFail:(id)fail;
- (id)init;

@end

#endif /* _TtC18XGoLiveBroadcaster24BroadcastDetailsProvider_h */
