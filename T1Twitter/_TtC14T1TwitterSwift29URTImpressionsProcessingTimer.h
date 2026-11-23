//
#ifndef _TtC14T1TwitterSwift29URTImpressionsProcessingTimer_h
#define _TtC14T1TwitterSwift29URTImpressionsProcessingTimer_h
@import Foundation;

@class NSObject, _$sSd, _$sSo18TFSDeferrableTimerCSg, _$sySo8TFSTimerCc;

@interface T1TwitterSwift.URTImpressionsProcessingTimer : NSObject { // (Swift)
    /* instance variables */
    __C.TFSDeferrableTimer? processImpressionsTimer;
    Swift.Double impressionsProcessingMaxDeferralTime;
    Swift.Double timeInterval;
    (__C.TFSTimer) -> () timerBlock;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29URTImpressionsProcessingTimer_h */
