//
#ifndef _TtC6AVChat32AVChatParticipantRankerViewModel_h
#define _TtC6AVChat32AVChatParticipantRankerViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Chat.AVChatParticipantRankingState ?, _$s7Combine19CurrentValueSubjectCMn _$ss5Int64VMn ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySa -> _$ss5Int64VMn _$sG _$ss5NeverOMn, _$sSD -> _$ss5Int64VMn AVChat.AVChatParticipantGridCellViewModel, _$sSa -> _$ss5Int64VMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatParticipantRankerViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatParticipantRankingState ? _lastObservedRankingState;
    Swift.Array -> nominal type descriptor for Swift.Int64 _sortedParticipantList;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 AVChat.AVChatParticipantGridCellViewModel _cellViewModels;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> nominal type descriptor for Swift.Int64 _$sG nominal type descriptor for Swift.Never mainParticipantListSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> nominal type descriptor for Swift.Int64 _$sG nominal type descriptor for Swift.Never secondaryParticipantListSubject;
    nominal type descriptor for Combine.CurrentValueSubject nominal type descriptor for Swift.Int64 ? nominal type descriptor for Swift.Never topParticipantUserIDSubject;
}

@end

#endif /* _TtC6AVChat32AVChatParticipantRankerViewModel_h */
