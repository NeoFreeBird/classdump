//
#ifndef _TtC8XAppCall28CallSharedAudioSessionWorker_h
#define _TtC8XAppCall28CallSharedAudioSessionWorker_h
@import Foundation;

@class TAVSharedAudioSession.SharedAudioSession, TAVSharedAudioSession.SharedAudioSession.SuspensionToken ?, _$s10CallEngine0A6StreamCMn, _$s10CallModels0A23AudioSessionStateStreamCMn, _$s11XFoundation13CombineWorkerCN, _$s7Combine12AnyPublisherVMn _$sySb _$ss5NeverOMn;

@interface XAppCall.CallSharedAudioSessionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for CallEngine.CallStream callStream;
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.Bool nominal type descriptor for Swift.Never liveCallPresence;
    nominal type descriptor for CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    TAVSharedAudioSession.SharedAudioSession sharedAudioSession;
    TAVSharedAudioSession.SharedAudioSession.SuspensionToken ? suspensionToken;
}

@end

#endif /* _TtC8XAppCall28CallSharedAudioSessionWorker_h */
