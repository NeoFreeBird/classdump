//
#ifndef _TtC18XGoLiveBroadcaster15BroadcastEditor_h
#define _TtC18XGoLiveBroadcaster15BroadcastEditor_h
@import Foundation;

#include "PTVBroadcastThumbnailManagerObserver-Protocol.h"

@class NSObject, XGoLiveBroadcaster.LiveMediaBroadcastClient ?, _$sSo21PTVBroadcastPublisherC, _$sySa -> XGoLive.GoLiveReplayFrame _$sGSgcSg;

@interface XGoLiveBroadcaster.BroadcastEditor : NSObject <PTVBroadcastThumbnailManagerObserver> { // (Swift)
    /* instance variables */
    __C.PTVBroadcastPublisher publisher;
    XGoLiveBroadcaster.LiveMediaBroadcastClient ? liveMediaSession;
     empty-list Swift.Array -> XGoLive.GoLiveReplayFrame _$sGSgcSg framesCompletion;
}

/* instance methods */
- (void)broadcastThumbnailManagerDidLoadThumbnails:(id)thumbnails;
- (void)broadcastThumbnailManagerDidFailToLoadThumbnails:(id)thumbnails;
- (id)init;

@end

#endif /* _TtC18XGoLiveBroadcaster15BroadcastEditor_h */
