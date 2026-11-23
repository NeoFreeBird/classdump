//
#ifndef _TtC4Grok31GrokAccountLinkEntryLinkMonitor_h
#define _TtC4Grok31GrokAccountLinkEntryLinkMonitor_h
@import Foundation;

@class Grok.GrokAccountLinkState _$sSgyc, Grok.GrokAccountLinkState _$syYac, _$s7Combine12AnyPublisherVMn _$ss5Int64VMn _$ss5NeverOMn, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$ss5Int64VMn, _$syyScMYcc, _TtCs12_SwiftObject;

@interface Grok.GrokAccountLinkEntryLinkMonitor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int64 userID;
    nominal type descriptor for Combine.AnyPublisher nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.Never linkStateDidChange;
    Grok.GrokAccountLinkState _$sSgyc cachedLinkState;
    Swift.Double pollIntervalSeconds;
    Swift.Int maxPollCount;
    Grok.GrokAccountLinkState _$syYac resolveLinkState;
    @Swift.MainActor () -> () onLinked;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pollTask;
}

@end

#endif /* _TtC4Grok31GrokAccountLinkEntryLinkMonitor_h */
