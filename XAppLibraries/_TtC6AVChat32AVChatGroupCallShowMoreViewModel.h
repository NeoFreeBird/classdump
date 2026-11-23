//
#ifndef _TtC6AVChat32AVChatGroupCallShowMoreViewModel_h
#define _TtC6AVChat32AVChatGroupCallShowMoreViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Chat.AVChatGroupCallShowMoreAudioRouteViewModel, Chat.AVChatGroupCallShowMoreMuteViewModel ?, Chat.AVChatGroupCallShowMoreRaiseHandViewModel, _$s7Combine9PublishedVMn AVChat.AVChatGroupCallShowMoreState, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatGroupCallShowMoreViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatGroupCallShowMoreRaiseHandViewModel _raiseHandViewModel;
    oneway _Atomic Chat.AVChatGroupCallShowMoreAudioRouteViewModel _audioRouteViewModel;
    oneway _Atomic Chat.AVChatGroupCallShowMoreMuteViewModel ? _muteViewModel;
    nominal type descriptor for Combine.Published AVChat.AVChatGroupCallShowMoreState _state;
}

@end

#endif /* _TtC6AVChat32AVChatGroupCallShowMoreViewModel_h */
