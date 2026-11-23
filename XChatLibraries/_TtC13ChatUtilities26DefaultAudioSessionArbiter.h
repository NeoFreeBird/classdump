//
#ifndef _TtC13ChatUtilities26DefaultAudioSessionArbiter_h
#define _TtC13ChatUtilities26DefaultAudioSessionArbiter_h
@import Foundation;

@class ChatUtilities.UnfairLock, _$sSi, _TtCs12_SwiftObject;

@interface ChatUtilities.DefaultAudioSessionArbiter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.UnfairLock lock;
    Swift.Int liveClaimCount;
}

@end

#endif /* _TtC13ChatUtilities26DefaultAudioSessionArbiter_h */
