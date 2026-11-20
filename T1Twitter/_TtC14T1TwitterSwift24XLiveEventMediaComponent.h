//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24XLiveEventMediaComponent_h
#define _TtC14T1TwitterSwift24XLiveEventMediaComponent_h
@import Foundation;

#include "T1LiveEventMediaViewInteractionDelegate-Protocol.h"
#include "T1LiveEventMediaViewPlaybackDelegate-Protocol.h"

@class NSObject, _$s10JetfuelSDK11ViewContextVMn, _$s10JetfuelSDK17RenderingDelegateMp ?, _$s10JetfuelSDK6ActionO5BoundVMn ?, _$sSS, _$sSaySo8NSObject_pG, _$sSo16TAVScribeContextCSg, _$ss13OpaquePointerVMn ?;

@interface T1TwitterSwift.XLiveEventMediaComponent : NSObject <T1LiveEventMediaViewPlaybackDelegate, T1LiveEventMediaViewInteractionDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.OpaquePointer ? node;
    protocol descriptor for JetfuelSDK.RenderingDelegate ? renderingDelegate;
    nominal type descriptor for JetfuelSDK.Action.Bound ? fullScreenAction;
    __C.TAVScribeContext? scribeContext;
    nominal type descriptor for JetfuelSDK.ViewContext context;
    Swift.String accountId;
    [__C.NSObject] bgObservers;
}

/* instance methods */
- (void)liveEventMediaView:(id)view didSetPlayer:(id)player;
- (void)liveEventMediaViewDidStartPlayback:(id)playback;
- (void)liveEventMediaViewDidCompletePlayback:(id)playback;
- (void)liveEventMediaView:(id)view didFailWithError:(id)error;
- (void)liveEventMediaViewDidStartAdPlayback:(id)playback;
- (void)liveEventMediaViewDidEndAdPlayback:(id)playback;
- (id)tavScribeContextForMediaView:(id)view;
- (void)liveEventMediaViewDidTapInitialPlayButton:(id)button;
- (void)liveEventMediaView:(id)view didTapToPlay:(_Bool)play;
- (void)liveEventMediaView:(id)view didUpdateMuteState:(_Bool)state;
- (void)liveEventMediaView:(id)view didTapToExpandMedia:(id)media previewImage:(id)image;
- (void)liveEventMediaView:(id)view didTapAttributionForStatus:(id)status;
- (void)liveEventMediaViewDidTapAudiospaceActionButton:(id)button;
- (void)liveEventMediaView:(id)view didTapToExpandBroadcast:(id)broadcast cardDataSource:(id)source;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24XLiveEventMediaComponent_h */
