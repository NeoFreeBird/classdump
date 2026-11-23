//
#ifndef _TtC4Grok17GrokTopUpReporter_h
#define _TtC4Grok17GrokTopUpReporter_h
@import Foundation;

@class Grok.GrokTopUpReportAttempts, _$sSD -> _$ss6UInt64VMn Grok.GrokTopUpReporter.Outcome, _$sSh -> _$ss6UInt64VMn, _TtCs12_SwiftObject;

@interface Grok.GrokTopUpReporter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Dictionary -> nominal type descriptor for Swift.UInt64 Grok.GrokTopUpReporter.Outcome outcomes;
    Swift.Set -> nominal type descriptor for Swift.UInt64 inFlight;
    Swift.Set -> nominal type descriptor for Swift.UInt64 attemptedThisLaunch;
    Swift.Set -> nominal type descriptor for Swift.UInt64 receivedToastShown;
    Grok.GrokTopUpReportAttempts attempts;
}

@end

#endif /* _TtC4Grok17GrokTopUpReporter_h */
