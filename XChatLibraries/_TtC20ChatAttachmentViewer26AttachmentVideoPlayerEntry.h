//
#ifndef _TtC20ChatAttachmentViewer26AttachmentVideoPlayerEntry_h
#define _TtC20ChatAttachmentViewer26AttachmentVideoPlayerEntry_h
@import Foundation;

@class ChatUtilities.AudioSessionArbitrating, ChatUtilities.AudioSessionClaim ?, _$s10Foundation21NSKeyValueObservationCMn ?, _$sSDySi ChatAttachmentViewer.AttachmentVideoPlayerRole role_ ChatAttachmentViewer.AttachmentVideoPlayback playbackt, _$sSi, _$sSo13AVQueuePlayerC, _$sSo14AVPlayerLooperC, _$syyc, _TtCs12_SwiftObject;

@interface ChatAttachmentViewer.AttachmentVideoPlayerEntry : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVQueuePlayer player;
    __C.AVPlayerLooper looper;
    ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    () -> () onUnused;
    Swift.Dictionary empty-list Swift.Int ChatAttachmentViewer.AttachmentVideoPlayerRole role_ ChatAttachmentViewer.AttachmentVideoPlayback playbackt leases;
    Swift.Int nextLeaseID;
    ChatUtilities.AudioSessionClaim ? audioSessionClaim;
    nominal type descriptor for Foundation.NSKeyValueObservation ? timeControlStatusObservation;
}

@end

#endif /* _TtC20ChatAttachmentViewer26AttachmentVideoPlayerEntry_h */
