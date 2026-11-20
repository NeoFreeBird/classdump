//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallSFU19CallSlotGrantWorker_h
#define _TtC7CallSFU19CallSlotGrantWorker_h
@import Foundation;

@class CallMedia.CallDiagnosticsStream, CallMedia.CallRemoteParticipantsStream, CallMedia.CallVideoTrackStream, CallModels.CallConnectionStateStream, CallSFU.CallSlotConfiguration, CallSFU.CallSlotLayoutStream, _$s11XFoundation13CombineWorkerCN;

@interface CallSFU.CallSlotGrantWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallSFU.CallSlotConfiguration slotConfiguration;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallSFU.CallSlotLayoutStream callSlotLayoutStream;
    CallMedia.CallVideoTrackStream callVideoTrackStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
}

@end

#endif /* _TtC7CallSFU19CallSlotGrantWorker_h */
