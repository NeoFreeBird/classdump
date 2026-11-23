//
#ifndef _TtC6AVChat24AVChatWebRTCPeriscopeAPI_h
#define _TtC6AVChat24AVChatWebRTCPeriscopeAPI_h
@import Foundation;

@class Chat.AVChatAPIRetryPolicy ?, Chat.AVChatLogger ?, Swift.Bool, _$sScTyyt _$ss5ErrorMp ?, _$sSd, _$sSo12PTVAVChatAPIC, _$sSo17TFNTwitterAccountC, _$sSo23PTVLoggedInUserProtocol_pSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatWebRTCPeriscopeAPI : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    oneway _Atomic Chat.AVChatLogger ? logger;
    __C.PTVAVChatAPI internalAPI;
    oneway _Atomic Chat.AVChatAPIRetryPolicy ? retryPolicy;
    Swift.Bool isTurnServersReuseEnabled;
    Swift.Double turnServersReuseMinimumValidity;
    Swift.Double turnServersReuseFetchTimeout;
    Swift.Task empty-list () protocol descriptor for Swift.Error ? _mediaStatusTask;
    __C.PTVLoggedInUserProtocol? loggedInPTVUser;
}

@end

#endif /* _TtC6AVChat24AVChatWebRTCPeriscopeAPI_h */
