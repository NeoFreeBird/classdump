//
#ifndef _TtC10XApiClient14XApiHTTPClient_h
#define _TtC10XApiClient14XApiHTTPClient_h
@import Foundation;

@class XApiClient.XApiBackoffGate ?, _$s10Foundation3URLVMn, _$sSSSg, _$sSa -> XApiClient.XApiClientObserver, _$sSa -> XApiClient.XApiRequestInterceptor, _$sSo12NSURLSessionC, _TtCs12_SwiftObject;

@interface XApiClient.XApiHTTPClient : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL baseURL;
    Swift.String? accountID;
    __C.NSURLSession session;
    Swift.Array -> XApiClient.XApiRequestInterceptor interceptors;
    Swift.Array -> XApiClient.XApiClientObserver observers;
    XApiClient.XApiBackoffGate ? backoffGate;
}

@end

#endif /* _TtC10XApiClient14XApiHTTPClient_h */
