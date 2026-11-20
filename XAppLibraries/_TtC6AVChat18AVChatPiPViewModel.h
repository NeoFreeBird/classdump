//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat18AVChatPiPViewModel_h
#define _TtC6AVChat18AVChatPiPViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, Swift.Bool, _$s7Combine9PublishedVMn AVChat.AVChatParticipantViewModel ?, _$sSD -> _$ss5Int64VMn AVChat.AVChatParticipantViewModel, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatPiPViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 AVChat.AVChatParticipantViewModel _viewModels;
    Swift.Bool _mainSpeakerUpdateIsDisabled;
    nominal type descriptor for Combine.Published AVChat.AVChatParticipantViewModel ? _mainSpeakerViewModel;
}

@end

#endif /* _TtC6AVChat18AVChatPiPViewModel_h */
