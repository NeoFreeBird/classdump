//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20ChatAttachmentViewer26AttachmentVideoPlayerLease_h
#define _TtC20ChatAttachmentViewer26AttachmentVideoPlayerLease_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentVideoPlayback, _$sSo8AVPlayerC, _$syyc, _TtCs12_SwiftObject;

@interface ChatAttachmentViewer.AttachmentVideoPlayerLease : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVPlayer player;
    ChatAttachmentViewer.AttachmentVideoPlayback playback;
    ChatAttachmentViewer.AttachmentVideoPlayback function type (escaping) onPlaybackChange;
    () -> () onRelease;
}

@end

#endif /* _TtC20ChatAttachmentViewer26AttachmentVideoPlayerLease_h */
