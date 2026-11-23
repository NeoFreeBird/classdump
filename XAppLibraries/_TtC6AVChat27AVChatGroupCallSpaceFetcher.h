//
#ifndef _TtC6AVChat27AVChatGroupCallSpaceFetcher_h
#define _TtC6AVChat27AVChatGroupCallSpaceFetcher_h
@import Foundation;

@class Builtin.DefaultActorStorage, Chat.AVChatWebRTCPeriscopeAPI, Swift.Bool, _$s14TFSTwitterCore17TwitterAudiospaceCMn _$scSg ->, _$sSS, _$ss5ErrorMp _$scSg ->, _$sySS_ _$ss5ErrorMp _$stcSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatGroupCallSpaceFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI api;
    Swift.String spaceID;
    Swift.Bool isRunning;
    nominal type descriptor for TFSTwitterCore.TwitterAudiospace _$scSg -> messageHandler;
    protocol descriptor for Swift.Error _$scSg -> errorHandler;
     empty-list Swift.String first-element-marker  protocol descriptor for Swift.Error _$stcSg errorLogger;
}

@end

#endif /* _TtC6AVChat27AVChatGroupCallSpaceFetcher_h */
