//
#ifndef _TtC10CallEngine24CallRtcStatsScribeWorker_h
#define _TtC10CallEngine24CallRtcStatsScribeWorker_h
@import Foundation;

@class CallEngine.CallScribeEmitter, CallMedia.CallMediaStatisticsRead ?, CallMedia.CallMediaStatisticsStream, CallMedia.UnfairLock, _$s11XFoundation13CombineWorkerCN, _$ss5Int64VMn;

@interface CallEngine.CallRtcStatsScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallMedia.CallMediaStatisticsStream callMediaStatisticsStream;
    CallEngine.CallScribeEmitter emitter;
    nominal type descriptor for Swift.Int64 reportIntervalMs;
    CallMedia.UnfairLock latestReadLock;
    CallMedia.CallMediaStatisticsRead ? latestReadStorage;
}

@end

#endif /* _TtC10CallEngine24CallRtcStatsScribeWorker_h */
