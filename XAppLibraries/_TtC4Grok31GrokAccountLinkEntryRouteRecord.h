//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok31GrokAccountLinkEntryRouteRecord_h
#define _TtC4Grok31GrokAccountLinkEntryRouteRecord_h
@import Foundation;

@class Grok.GrokAccountLinkEntryGate.Outcome ?, Grok.GrokAccountLinkState _$sSgyc, _$s7Combine14AnyCancellableCMn ?, _$sSbyc, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface Grok.GrokAccountLinkEntryRouteRecord : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    Grok.GrokAccountLinkEntryGate.Outcome ? recordedRoute;
    Grok.GrokAccountLinkEntryGate.Outcome ? pendingOutcome;
    Grok.GrokAccountLinkState _$sSgyc currentLinkState;
    () -> Swift.Bool isConversationCreated;
    nominal type descriptor for Combine.AnyCancellable ? cancellable;
}

@end

#endif /* _TtC4Grok31GrokAccountLinkEntryRouteRecord_h */
