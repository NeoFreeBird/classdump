//
#ifndef _TtC10CallEngine20CallLocalMediaWorker_h
#define _TtC10CallEngine20CallLocalMediaWorker_h
@import Foundation;

@class CallEngine.CallMediaPermissionStream, CallEngine.CallScribeEmitter, CallMedia.LocalParticipantMedia, CallModels.CallAudioSessionStateStream, CallModels.CallSessionActionTriggerStream, CallModels.LocalMediaStateStream, Swift.Bool, _$s11XFoundation13CombineWorkerCN, _$sSbSg;

@interface CallEngine.CallLocalMediaWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallSessionActionTriggerStream callSessionActionTriggerStream;
    CallEngine.CallMediaPermissionStream callMediaPermissionStream;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    CallModels.LocalMediaStateStream localMediaStateStream;
    CallMedia.LocalParticipantMedia localParticipantMedia;
    Swift.Bool isMicrophoneRequestedAtStart;
    CallEngine.CallScribeEmitter emitter;
    Swift.Bool? microphoneEnabledBeforeUnavailable;
}

@end

#endif /* _TtC10CallEngine20CallLocalMediaWorker_h */
