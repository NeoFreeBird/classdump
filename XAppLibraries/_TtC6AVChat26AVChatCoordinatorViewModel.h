//
#ifndef _TtC6AVChat26AVChatCoordinatorViewModel_h
#define _TtC6AVChat26AVChatCoordinatorViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Chat.AVChatParticipantRankerViewModel, _$s7Combine9PublishedVMn AVChat.AVChatCoordinatorViewModel.State, _$s7Combine9PublishedVMn AVChat.AVChatScreenShareViewModel ?, _$s7Combine9PublishedVMn AVChat.AVChatSecondaryParticipantsViewModel ?, _$s7Combine9PublishedVMn _$ss5Int64VMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatCoordinatorViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatParticipantRankerViewModel _participantRankerViewModel;
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.Published AVChat.AVChatCoordinatorViewModel.State _state;
    nominal type descriptor for Combine.Published AVChat.AVChatSecondaryParticipantsViewModel ? _secondaryParticipantsViewModel;
    nominal type descriptor for Combine.Published AVChat.AVChatScreenShareViewModel ? _screenShareViewModel;
    nominal type descriptor for Combine.Published nominal type descriptor for Swift.Int64 ? _topParticipantUserID;
}

@end

#endif /* _TtC6AVChat26AVChatCoordinatorViewModel_h */
