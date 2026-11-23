//
#ifndef _TtC6AVChat27AVChatGroupCallGuestFetcher_h
#define _TtC6AVChat27AVChatGroupCallGuestFetcher_h
@import Foundation;

@class Builtin.DefaultActorStorage, Chat.AVChatWebRTCPeriscopeAPI, Swift.Bool, _$sSo12PTVBroadcastC, _$ss5ErrorMp _$scSg ->, _$sySS_ _$ss5ErrorMp _$stcSg, _$sySo24PTVGuestServicesResponseCcSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatGroupCallGuestFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    __C.PTVBroadcast _broadcast;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI _api;
    Swift.Bool isRunning;
    ((__C.PTVGuestServicesResponse) -> ())? messageHandler;
    protocol descriptor for Swift.Error _$scSg -> errorHandler;
     empty-list Swift.String first-element-marker  protocol descriptor for Swift.Error _$stcSg errorLogger;
}

@end

#endif /* _TtC6AVChat27AVChatGroupCallGuestFetcher_h */
