//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok31GrokAccountLinkEntryCoordinator_h
#define _TtC4Grok31GrokAccountLinkEntryCoordinator_h
@import Foundation;

@class Grok.GrokAccountLinkPromptFatigue, Grok.GrokGatewayEligibility, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn _$ss5Int64VMn _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn Grok.GrokAccountLinkEntryCoordinator.EntryState, _$sSD -> _$ss5Int64VMn _$sSa -> Grok.PendingSendWaiter, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GrokAccountLinkEntryCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.Never linkEntryDidChange;
    Grok.GrokAccountLinkPromptFatigue fatigue;
    Grok.GrokGatewayEligibility eligibility;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Grok.GrokAccountLinkEntryCoordinator.EntryState entryStates;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.Array -> Grok.PendingSendWaiter pendingSendWaiters;
    Swift.Int checkGeneration;
    nominal type descriptor for Combine.AnyCancellable ? foregroundCancellable;
}

@end

#endif /* _TtC4Grok31GrokAccountLinkEntryCoordinator_h */
