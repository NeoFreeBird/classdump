//
#ifndef _TtC4Grok32GrokImagineProgressInterpolation_h
#define _TtC4Grok32GrokImagineProgressInterpolation_h
@import Foundation;

@class Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySd _$ss5NeverOMn, _$sSd, _$sSo7NSTimerCSg, _TtCs12_SwiftObject;

@interface Grok.GrokImagineProgressInterpolation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Double estimatedTotalTime;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Double nominal type descriptor for Swift.Never subject;
    Swift.Double maxInterpolatedProgress;
    Swift.Bool isStarted;
    Swift.Double realProgress;
    Swift.Double displayedProgress;
    __C.NSTimer? pendingTimer;
    Swift.Double randomDelay;
    Swift.Double stuckPoint;
}

@end

#endif /* _TtC4Grok32GrokImagineProgressInterpolation_h */
