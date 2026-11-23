//
#ifndef _TtC6AVChat26AVChatScreenShareViewModel_h
#define _TtC6AVChat26AVChatScreenShareViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Chat.AVChatRendererViewModel, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatScreenShareViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Bool _isContentVisible;
    oneway _Atomic Chat.AVChatRendererViewModel rendererViewModel;
}

@end

#endif /* _TtC6AVChat26AVChatScreenShareViewModel_h */
