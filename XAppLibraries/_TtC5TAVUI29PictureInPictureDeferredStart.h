//
#ifndef _TtC5TAVUI29PictureInPictureDeferredStart_h
#define _TtC5TAVUI29PictureInPictureDeferredStart_h
@import Foundation;

@class TAVUI.PictureInPictureDeferredStart.WaitingTapPermission _$syc, TAVUI.PictureInPictureReadiness, _$sSbyc, _$sSd, _$sSdSg, _$sSo13TAVPlayerViewCSgyc, _$sSo9TAVPlayerCSgXw, _$syyc, _TtCs12_SwiftObject;

@interface TAVUI.PictureInPictureDeferredStart : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TAVUI.PictureInPictureReadiness readiness;
    Swift.Double wait;
    () -> __C.TAVPlayerView? playerView;
    () -> Swift.Bool canWait;
    TAVUI.PictureInPictureDeferredStart.WaitingTapPermission _$syc waitingTapPermission;
    () -> () onChange;
    () -> () startWaitingTap;
    Swift.Double? heldUntil;
    weak __C.TAVPlayer? waitingPlayer;
}

@end

#endif /* _TtC5TAVUI29PictureInPictureDeferredStart_h */
