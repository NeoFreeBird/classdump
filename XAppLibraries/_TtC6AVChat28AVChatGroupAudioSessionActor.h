//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat28AVChatGroupAudioSessionActor_h
#define _TtC6AVChat28AVChatGroupAudioSessionActor_h
@import Foundation;

#include "AVAudioPlayerDelegate-Protocol.h"
#include "RTCAudioSessionDelegate-Protocol.h"

@class NSObject, Swift.Bool, TAVSharedAudioSession.SharedAudioSession.SuspensionToken ?, _$s7Combine18PassthroughSubjectCMn _$ss5ErrorMp _$s_p -> _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$ss5ErrorMp _$s_p_ -> AVChat.AVChatGroupCallCoordinator.EndReason _$st _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySo15RTCAudioSessionC_ __C.RouteChangeReason _$sSo07AVAudioB16RouteDescriptionCt _$ss5NeverOMn, _$sSS8resource_SS3extSb12shouldRepeattSg, _$sSo13AVAudioPlayerCSg;

@interface AVChat.AVChatGroupAudioSessionActor : NSObject <RTCAudioSessionDelegate, AVAudioPlayerDelegate> { // (Swift)
    /* instance variables */
    Swift.Bool isAudioOnly;
    TAVSharedAudioSession.SharedAudioSession.SuspensionToken ? _suspensionToken;
    __C.AVAudioPlayer? _musicPlayer;
    (resource: Swift.String, ext: Swift.String, shouldRepeat: Swift.Bool)? _currentMusicResource;
    Swift.Bool isMusicPlayerMuted;
    Swift.Bool didInitializeAudioSession;
    nominal type descriptor for Combine.PassthroughSubject  empty-list __C.RTCAudioSession first-element-marker  __C.RouteChangeReason _$sSo07AVAudioB16RouteDescriptionCt nominal type descriptor for Swift.Never routeChangePublisher;
    nominal type descriptor for Combine.PassthroughSubject protocol descriptor for Swift.Error _$s_p_ -> AVChat.AVChatGroupCallCoordinator.EndReason _$st nominal type descriptor for Swift.Never failurePublisher;
    nominal type descriptor for Combine.PassthroughSubject protocol descriptor for Swift.Error _$s_p -> nominal type descriptor for Swift.Never failureNotFatalPublisher;
}

/* instance methods */
- (void)audioSessionDidChangeRoute:(id)route reason:(unsigned long long)reason previousRoute:(id)route;
- (void)audioSession:(id)session failedToSetActive:(_Bool)active error:(id)error;
- (void)audioSession:(id)session audioUnitStartFailedWithError:(id)error;
- (void)audioSession:(id)session didSetActive:(_Bool)active;
- (void)audioPlayerDidFinishPlaying:(id)playing successfully:(_Bool)successfully;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC6AVChat28AVChatGroupAudioSessionActor_h */
