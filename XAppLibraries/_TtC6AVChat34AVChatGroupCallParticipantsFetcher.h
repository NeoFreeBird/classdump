//
#ifndef _TtC6AVChat34AVChatGroupCallParticipantsFetcher_h
#define _TtC6AVChat34AVChatGroupCallParticipantsFetcher_h
@import Foundation;

@class Builtin.DefaultActorStorage, Chat.AVChatWebRTCPeriscopeAPI, Swift.Bool, _$sSS, _$ss5ErrorMp _$scSg ->, _$sySDySSypGcSg, _$sySS_ _$ss5ErrorMp _$stcSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatGroupCallParticipantsFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String _broadcastID;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI _api;
    Swift.Bool isRunning;
    (([Swift.String : Any]) -> ())? messageHandler;
    protocol descriptor for Swift.Error _$scSg -> errorHandler;
     empty-list Swift.String first-element-marker  protocol descriptor for Swift.Error _$stcSg errorLogger;
}

@end

#endif /* _TtC6AVChat34AVChatGroupCallParticipantsFetcher_h */
