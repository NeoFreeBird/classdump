//
#ifndef _TtC6AVChat32AVChatGroupCallParticipantRanker_h
#define _TtC6AVChat32AVChatGroupCallParticipantRanker_h
@import Foundation;

@class Chat.AVChatParticipantRankingState ?, _$s10Foundation4DateVMn ?, _$s7Combine9PublishedVMn AVChat.AVChatParticipantRankingState, _$sSo8TFSTimerCSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatGroupCallParticipantRanker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published AVChat.AVChatParticipantRankingState _rankingState;
    oneway _Atomic Chat.AVChatParticipantRankingState ? _pendingRankingState;
    nominal type descriptor for Foundation.Date ? _rankedParticipantsLastUpdateTS;
    __C.TFSTimer? _rankedParticipantsDebounceTimer;
}

@end

#endif /* _TtC6AVChat32AVChatGroupCallParticipantRanker_h */
