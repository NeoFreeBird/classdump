//
#ifndef _TtC10CallEngine20CallCapabilityWorker_h
#define _TtC10CallEngine20CallCapabilityWorker_h
@import Foundation;

@class CallEngine.CallMediaTopologyStream, CallModels.CallCapabilityStream, CallModels.CallOrigin, Swift.Bool, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallCapabilityWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallOrigin origin;
    Swift.Bool isInviteToCallEnabled;
    CallEngine.CallMediaTopologyStream callMediaTopologyStream;
    CallModels.CallCapabilityStream callCapabilityStream;
}

@end

#endif /* _TtC10CallEngine20CallCapabilityWorker_h */
