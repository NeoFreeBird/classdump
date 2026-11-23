//
#ifndef _TtC13ChatUtilities31ConversationAudioPlaybackWorker_h
#define _TtC13ChatUtilities31ConversationAudioPlaybackWorker_h
@import Foundation;

@class ChatModels.AudioPlaybackStream, ChatUtilities.AudioSessionArbitrating, ChatUtilities.AudioSessionClaim ?, _$s11XFoundation13CombineWorkerCN, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo8AVPlayerCSg, _$sypSg;

@interface ChatUtilities.ConversationAudioPlaybackWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.AudioPlaybackStream audioPlaybackStream;
    ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable assetSubscriptions;
    ChatUtilities.AudioSessionClaim ? audioSessionClaim;
    __C.AVPlayer? player;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable playerSubscriptions;
    Any? timeObserverToken;
}

@end

#endif /* _TtC13ChatUtilities31ConversationAudioPlaybackWorker_h */
