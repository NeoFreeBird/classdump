//
#ifndef _TtCC5TAVUI19PlaybackObservationP33_9532C6CB139AC749328430BC70D5F64926BlockBasedPlaybackObserver_h
#define _TtCC5TAVUI19PlaybackObservationP33_9532C6CB139AC749328430BC70D5F64926BlockBasedPlaybackObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class _TtCs12_SwiftObject;

@interface TAVUI.PlaybackObservation.(BlockBasedPlaybackObserver in _9532C6CB139AC749328430BC70D5F649) : Swift._SwiftObject <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 block;
    @40@0:8:16@24@32 didAttachBlock;
    @40@0:8:16@24@32 didDetachBlock;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)observerDidAttachToPlayer:(id)player;
- (void)observerDidDetachFromPlayer:(id)player;

@end

#endif /* _TtCC5TAVUI19PlaybackObservationP33_9532C6CB139AC749328430BC70D5F64926BlockBasedPlaybackObserver_h */
