//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7CallP2P23P2PPreparedMediaSession_h
#define _TtC7CallP2P23P2PPreparedMediaSession_h
@import Foundation;

@class Builtin.DefaultActorStorage, CallMedia.LocalParticipantMedia, CallP2P.CallP2PSessionStream, CallP2P.P2PCallMediaSession CallModels.CallConnectionConfiguration _$s_ CallP2P.P2PCallSession _$stc, CallP2P.P2PPreparedAnswer, CallP2P.P2PPreparedMediaSession.Phase, _$s7Combine19CurrentValueSubjectCMn CallP2P.P2PCallMediaSession ? _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface CallP2P.P2PPreparedMediaSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    CallP2P.P2PPreparedAnswer preparedAnswer;
    CallMedia.LocalParticipantMedia localParticipant;
    CallP2P.CallP2PSessionStream sessions;
    CallP2P.P2PCallMediaSession CallModels.CallConnectionConfiguration  first-element-marker  CallP2P.P2PCallSession _$stc makeSession;
    nominal type descriptor for Combine.CurrentValueSubject CallP2P.P2PCallMediaSession ? nominal type descriptor for Swift.Never mediaSession;
    CallP2P.P2PPreparedMediaSession.Phase phase;
}

@end

#endif /* _TtC7CallP2P23P2PPreparedMediaSession_h */
