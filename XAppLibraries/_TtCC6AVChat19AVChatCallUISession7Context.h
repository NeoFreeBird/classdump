//
#ifndef _TtCC6AVChat19AVChatCallUISession7Context_h
#define _TtCC6AVChat19AVChatCallUISession7Context_h
@import Foundation;

@class Chat.AVChatGroupCallCoordinator, Chat.AVChatGroupCallInfo, Chat.AVChatGroupCallParticipantRanker, Chat.AVChatParticipantRankingState, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn AVChat.AVChatCallUISession.ContextInfo _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatCallUISession.Context : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatGroupCallCoordinator coordinator;
    oneway _Atomic Chat.AVChatGroupCallParticipantRanker participantRanker;
    nominal type descriptor for Combine.CurrentValueSubject AVChat.AVChatCallUISession.ContextInfo nominal type descriptor for Swift.Never contextInfoSubject;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Bool _isUpdatingContextInfo;
    oneway _Atomic Chat.AVChatGroupCallInfo _callInfo;
    oneway _Atomic Chat.AVChatParticipantRankingState _rankingState;
}

@end

#endif /* _TtCC6AVChat19AVChatCallUISession7Context_h */
