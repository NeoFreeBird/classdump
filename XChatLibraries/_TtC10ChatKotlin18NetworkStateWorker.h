//
#ifndef _TtC10ChatKotlin18NetworkStateWorker_h
#define _TtC10ChatKotlin18NetworkStateWorker_h
@import Foundation;

@class ChatKotlin.AirplaneModeStream, ChatKotlin.NetworkConnectionStateStream, _$s11XFoundation13CombineWorkerCN, _$s7Network13NWPathMonitorCMn;

@interface ChatKotlin.NetworkStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatKotlin.AirplaneModeStream airplaneModeStream;
    nominal type descriptor for Network.NWPathMonitor monitor;
    ChatKotlin.NetworkConnectionStateStream networkConnectionStateStream;
}

@end

#endif /* _TtC10ChatKotlin18NetworkStateWorker_h */
