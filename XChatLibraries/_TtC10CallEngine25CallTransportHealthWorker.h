//
#ifndef _TtC10CallEngine25CallTransportHealthWorker_h
#define _TtC10CallEngine25CallTransportHealthWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallEngine.CallTransportHealth, CallMedia.CallDiagnosticsStream, CallMedia.CallNetworkPathStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallTransportHealthWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallDiagnosticsStream callDiagnosticsStream;
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    CallEngine.CallScribeEmitter emitter;
    DispatchQueue queue;
    CallEngine.CallTransportHealth health;
}

@end

#endif /* _TtC10CallEngine25CallTransportHealthWorker_h */
