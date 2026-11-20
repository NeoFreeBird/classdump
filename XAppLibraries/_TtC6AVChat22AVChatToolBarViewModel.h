//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat22AVChatToolBarViewModel_h
#define _TtC6AVChat22AVChatToolBarViewModel_h
@import Foundation;

@class Chat.AVChatCallUISession, _$s7Combine9PublishedVMn AVChat.AVChatCoordinatorAudioRouteState, _$s7Combine9PublishedVMn AVChat.AVChatToolBarConfiguration, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface AVChat.AVChatToolBarViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published AVChat.AVChatToolBarConfiguration _configuration;
    nominal type descriptor for Combine.Published AVChat.AVChatCoordinatorAudioRouteState _currentAudioRouteState;
    oneway _Atomic Chat.AVChatCallUISession _callUISession;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
}

@end

#endif /* _TtC6AVChat22AVChatToolBarViewModel_h */
