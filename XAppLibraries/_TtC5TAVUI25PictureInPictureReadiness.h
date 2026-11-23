//
#ifndef _TtC5TAVUI25PictureInPictureReadiness_h
#define _TtC5TAVUI25PictureInPictureReadiness_h
@import Foundation;

@class Swift.Bool, _$sSa -> _$s10Foundation21NSKeyValueObservationCMn, _$sSaySo8NSObject_pG, _$sSo13AVPlayerLayerCSgXw, _$sSo13TAVPlayerViewCSgXw, _$sSo8AVPlayerCSgXw, _$sSo9TAVPlayerCSgXw, _$syycSg, _TtCs12_SwiftObject;

@interface TAVUI.PictureInPictureReadiness : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isReady;
    (() -> ())? onChange;
    weak __C.TAVPlayerView? playerView;
    weak __C.TAVPlayer? player;
    weak __C.AVPlayerLayer? playerLayer;
    weak __C.AVPlayer? layerPlayer;
    Swift.Array -> nominal type descriptor for Foundation.NSKeyValueObservation inputObservations;
    [__C.NSObject] audioSessionObservers;
    Swift.Bool isPlaybackCategory;
}

@end

#endif /* _TtC5TAVUI25PictureInPictureReadiness_h */
