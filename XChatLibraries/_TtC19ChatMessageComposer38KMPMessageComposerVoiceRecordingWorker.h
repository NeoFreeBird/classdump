//
#ifndef _TtC19ChatMessageComposer38KMPMessageComposerVoiceRecordingWorker_h
#define _TtC19ChatMessageComposer38KMPMessageComposerVoiceRecordingWorker_h
@import Foundation;

@class ChatMessageComposer.AudioRecorder ?, ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerWorkerPluginContext, ChatMessageComposer.MessageCompositionStream, ChatModels.AudioPlaybackStream, ChatModelsCore.ChatHost, ChatUtilities.AudioSessionArbitrating, ChatUtilities.AudioSessionClaim ?, DispatchQueue, Swift.Bool, _$s11XFoundation13CombineWorkerCN, _$s12XPermissions17PermissionBuilderCMn;

@interface ChatMessageComposer.KMPMessageComposerVoiceRecordingWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.AudioPlaybackStream audioPlaybackStream;
    ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    ChatModelsCore.ChatHost chatHost;
    ChatMessageComposer.MessageComposerWorkerPluginContext context;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    nominal type descriptor for XPermissions.PermissionBuilder permissionBuilder;
    DispatchQueue audioQueue;
    ChatMessageComposer.AudioRecorder ? audioRecorder;
    ChatUtilities.AudioSessionClaim ? audioSessionClaim;
    Swift.Bool isAudioSessionActive;
}

@end

#endif /* _TtC19ChatMessageComposer38KMPMessageComposerVoiceRecordingWorker_h */
