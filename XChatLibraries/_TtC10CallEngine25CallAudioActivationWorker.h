//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine25CallAudioActivationWorker_h
#define _TtC10CallEngine25CallAudioActivationWorker_h
@import Foundation;

@class CallModels.CallAudioSessionStateStream, _$s10Foundation4UUIDVMn, _$s11XFoundation13CombineWorkerCN, _$s7Combine12AnyPublisherVMn CallModels.CallAudioSessionActivation _$ss5NeverOMn, _$s7Combine12AnyPublisherVMn _$sySh -> _$s10Foundation4UUIDVMn _$sG _$ss5NeverOMn;

@interface CallEngine.CallAudioActivationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.UUID callUUID;
    nominal type descriptor for Combine.AnyPublisher CallModels.CallAudioSessionActivation nominal type descriptor for Swift.Never audioActivation;
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.Set -> nominal type descriptor for Foundation.UUID _$sG nominal type descriptor for Swift.Never audioUnavailableCallUUIDs;
    CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
}

@end

#endif /* _TtC10CallEngine25CallAudioActivationWorker_h */
