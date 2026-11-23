//
#ifndef _TtC17XNetworkUtilities19XCommunicationAgent_h
#define _TtC17XNetworkUtilities19XCommunicationAgent_h
@import Foundation;

@class DispatchQueue, Swift.Bool, XNetworkUtilities.XCaptivePortalStatus, XNetworkUtilities.XCarrierInfo ?, XNetworkUtilities.XNetworkReachabilityStatus, XNetworkUtilities.XNetworkReachabilityStatus ?, _$s7Network13NWPathMonitorCMn ?, _$sSS, _$sSSSg, _$sSa -> XNetworkUtilities.WeakObserverWrapper, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface XNetworkUtilities.XCommunicationAgent : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String host;
    __C.NSLock lock;
    XNetworkUtilities.XNetworkReachabilityStatus _reachabilityStatus;
    XNetworkUtilities.XCaptivePortalStatus _captivePortalStatus;
    Swift.String? _wwanRadioAccessTechnology;
    XNetworkUtilities.XCarrierInfo ? _carrierInfo;
    Swift.Array -> XNetworkUtilities.WeakObserverWrapper observers;
    nominal type descriptor for Network.NWPathMonitor ? pathMonitor;
    DispatchQueue monitorQueue;
    XNetworkUtilities.XNetworkReachabilityStatus ? _overrideReachabilityStatus;
    XNetworkUtilities.XCarrierInfo ? _overrideCarrierInfo;
    Swift.Bool _overrideCarrierInfoIsSet;
    Swift.String? _overrideWWANRadioAccessTechnology;
    Swift.Bool _overrideWWANRadioAccessTechnologyIsSet;
}

@end

#endif /* _TtC17XNetworkUtilities19XCommunicationAgent_h */
