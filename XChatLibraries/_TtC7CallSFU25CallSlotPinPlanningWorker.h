//
#ifndef _TtC7CallSFU25CallSlotPinPlanningWorker_h
#define _TtC7CallSFU25CallSlotPinPlanningWorker_h
@import Foundation;

@class CallMedia.CallPeerStateStream, CallMedia.CallRemoteParticipantsStream, CallModels.CallPinnedParticipantsStream, CallSFU.CallSlotPinsStream, _$s11XFoundation13CombineWorkerCN;

@interface CallSFU.CallSlotPinPlanningWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallPeerStateStream callPeerStateStream;
    CallMedia.CallRemoteParticipantsStream callRemoteParticipantsStream;
    CallModels.CallPinnedParticipantsStream callPinnedParticipantsStream;
    CallSFU.CallSlotPinsStream callSlotPinsStream;
}

@end

#endif /* _TtC7CallSFU25CallSlotPinPlanningWorker_h */
