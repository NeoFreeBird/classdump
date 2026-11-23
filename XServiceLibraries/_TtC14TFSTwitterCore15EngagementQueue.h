//
#ifndef _TtC14TFSTwitterCore15EngagementQueue_h
#define _TtC14TFSTwitterCore15EngagementQueue_h
@import Foundation;

@class TFSModel.ModelContext ?, _$sSD -> TFSTwitterCore.EngagementQueue.Key TFSTwitterCore.EngagementQueue.Entry, _$sSo20NSNotificationCenterC, _$sSo8NSObject_pSg, _$sySd_yyctc, _TtCs12_SwiftObject;

@interface TFSTwitterCore.EngagementQueue : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.ModelContext ? modelContext;
    __C.NSNotificationCenter notificationCenter;
    (Swift.Double, () -> ()) -> () scheduleRetry;
    Swift.Dictionary -> TFSTwitterCore.EngagementQueue.Key TFSTwitterCore.EngagementQueue.Entry entries;
    __C.NSObject? connectivityObserver;
}

@end

#endif /* _TtC14TFSTwitterCore15EngagementQueue_h */
