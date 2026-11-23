//
#ifndef _TtC10CallEngine21CallNetworkPathWorker_h
#define _TtC10CallEngine21CallNetworkPathWorker_h
@import Foundation;

@class CallMedia.CallNetworkPathStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN, _$s7Network13NWPathMonitorCMn, _$s7Network6NWPathVMn ?, _$sSo22CTTelephonyNetworkInfoC;

@interface CallEngine.CallNetworkPathWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallNetworkPathStream callNetworkPathStream;
    nominal type descriptor for Network.NWPathMonitor monitor;
    __C.CTTelephonyNetworkInfo telephonyNetworkInfo;
    DispatchQueue queue;
    nominal type descriptor for Network.NWPath ? lastPath;
}

@end

#endif /* _TtC10CallEngine21CallNetworkPathWorker_h */
