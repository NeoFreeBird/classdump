//
#ifndef _TtC14DMConversation31ConversationAudioPlaybackWorker_h
#define _TtC14DMConversation31ConversationAudioPlaybackWorker_h
@import Foundation;

@class TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ?, _$s10ChatModels19AudioPlaybackStreamCMn, _$s11XFoundation13CombineWorkerCN, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo8AVPlayerCSg, _$sypSg;

@interface DMConversation.ConversationAudioPlaybackWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModels.AudioPlaybackStream audioPlaybackStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable assetSubscriptions;
    TAVSharedAudioSession.SharedAudioSession.ConfigurationToken ? audioSessionToken;
    __C.AVPlayer? player;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable playerSubscriptions;
    Any? timeObserverToken;
}

@end

#endif /* _TtC14DMConversation31ConversationAudioPlaybackWorker_h */
