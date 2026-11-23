//
#ifndef _TtC4Grok22GatewayOfflineDialPark_h
#define _TtC4Grok22GatewayOfflineDialPark_h
@import Foundation;

@class DispatchQueue, Grok.GatewayNetworkReachabilityProviding, _$s7Combine14AnyCancellableCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSd, _$syycSg, _TtCs12_SwiftObject;

@interface Grok.GatewayOfflineDialPark : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GatewayNetworkReachabilityProviding reachability;
    DispatchQueue queue;
    Swift.Double maxParkSeconds;
    (() -> ())? parkedDial;
    nominal type descriptor for Dispatch.DispatchWorkItem ? parkCapWorkItem;
    nominal type descriptor for Combine.AnyCancellable ? reachabilityCancellable;
}

@end

#endif /* _TtC4Grok22GatewayOfflineDialPark_h */
