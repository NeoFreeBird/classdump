//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine27CallReactionReceivingWorker_h
#define _TtC10CallEngine27CallReactionReceivingWorker_h
@import Foundation;

@class CallMedia.CallRemoteParticipantsStream, CallMedia.CallStateChannelStream, CallModels.CallReactionStream, CallModels.CallUserID, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallReactionReceivingWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallUserID selfUserID;
    CallMedia.CallStateChannelStream callStateChannelStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallModels.CallReactionStream callReactionStream;
}

@end

#endif /* _TtC10CallEngine27CallReactionReceivingWorker_h */
