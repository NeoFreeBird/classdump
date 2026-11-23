//
#ifndef _TtC6AVChat26AVChatParticipantViewModel_h
#define _TtC6AVChat26AVChatParticipantViewModel_h
@import Foundation;

@class Chat.AVChatCallParticipant, Chat.AVChatCallUISession, Chat.AVChatCallUISession.UIState.UIDestination, Chat.AVChatInfoItemsViewModel, Chat.AVChatRendererViewModel, Swift.Bool, _$s7Combine9PublishedVMn AVChat.AVChatInfoItemsState.AudioInput, _$s7Combine9PublishedVMn AVChat.AVChatParticipantViewModel.ActionButton ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sSo23TUIAvatarImageViewModelCSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatParticipantViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallParticipant _participant;
    Swift.Bool _isContentVisible;
    oneway _Atomic Chat.AVChatCallUISession.UIState.UIDestination _uiDestinations;
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatRendererViewModel rendererViewModel;
    oneway _Atomic Chat.AVChatInfoItemsViewModel infoItemsViewModel;
    nominal type descriptor for Combine.Published __C.TUIAvatarImageViewModel? _avatarViewModel;
    nominal type descriptor for Combine.Published Swift.String? _titleText;
    nominal type descriptor for Combine.Published AVChat.AVChatParticipantViewModel.ActionButton ? _actionButton;
    nominal type descriptor for Combine.Published AVChat.AVChatInfoItemsState.AudioInput _audioInputInfo;
    nominal type descriptor for Combine.Published Swift.Bool _isScreenSharing;
}

@end

#endif /* _TtC6AVChat26AVChatParticipantViewModel_h */
