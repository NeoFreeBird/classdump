//
#ifndef _TtC11XApiService21XApiUserAgentProvider_h
#define _TtC11XApiService21XApiUserAgentProvider_h
@import Foundation;

@class XApiService.UnfairLock, XApiService.XApiCommunicationAgent ?, XApiService.XApiNetworkReachabilityStatus, XApiService.XApiVersionProvider, _$sSS, _TtCs12_SwiftObject;

@interface XApiService.XApiUserAgentProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XApiService.XApiCommunicationAgent ? communicationAgent;
    XApiService.XApiVersionProvider versionProvider;
    XApiService.XApiNetworkReachabilityStatus networkStatus;
    Swift.String userAgentPrefix;
    Swift.String yearClassString;
    XApiService.UnfairLock lock;
}

@end

#endif /* _TtC11XApiService21XApiUserAgentProvider_h */
