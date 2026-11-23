//
#ifndef _TtC4Grok32GrokAccountLinkEntryPresentation_h
#define _TtC4Grok32GrokAccountLinkEntryPresentation_h
@import Foundation;

@class Grok.GrokAccountLinkEntryGate.Cancellability, Grok.GrokAccountLinkEntryLinkMonitor ?, Swift.Bool, _$sSayySbScMYccG, _$syyScMYcc, _TtCs12_SwiftObject;

@interface Grok.GrokAccountLinkEntryPresentation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokAccountLinkEntryGate.Cancellability cancellability;
    Grok.GrokAccountLinkEntryLinkMonitor ? monitor;
    @Swift.MainActor () -> () close;
    @Swift.MainActor () -> () onDismissed;
    Swift.Bool isStarted;
    [@Swift.MainActor (Swift.Bool) -> ()] startWaiters;
}

@end

#endif /* _TtC4Grok32GrokAccountLinkEntryPresentation_h */
