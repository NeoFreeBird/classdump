//
#ifndef _TtC10JetfuelSDK10DomFetcher_h
#define _TtC10JetfuelSDK10DomFetcher_h
@import Foundation;

@class JetfuelSDK.ActionStorage, JetfuelSDK.DOM, JetfuelSDK.DOMLoader, JetfuelSDK.EventsHandlerEnv, JetfuelSDK.Runtime, _$s7Combine9PublishedVMn JetfuelSDK.DomFetcher.FetchState, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface JetfuelSDK.DomFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.DOM dom;
    JetfuelSDK.DOMLoader loader;
    JetfuelSDK.Runtime runtime;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? activeTask;
    nominal type descriptor for Combine.Published JetfuelSDK.DomFetcher.FetchState _state;
    JetfuelSDK.EventsHandlerEnv eventsHandler;
    JetfuelSDK.ActionStorage actionStorage;
}

@end

#endif /* _TtC10JetfuelSDK10DomFetcher_h */
