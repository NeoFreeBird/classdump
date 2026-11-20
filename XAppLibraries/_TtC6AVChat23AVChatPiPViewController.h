//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat23AVChatPiPViewController_h
#define _TtC6AVChat23AVChatPiPViewController_h
@import Foundation;

@class AVPictureInPictureVideoCallViewController, Chat.AVChatParticipantView ?, Chat.AVChatPiPViewModel ?, _$s10Foundation4UUIDVMn ?, _$s7Combine14AnyCancellableCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewC, _$syycSg;

@interface AVChat.AVChatPiPViewController : AVPictureInPictureVideoCallViewController { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatPiPViewModel ? _viewModel;
    oneway _Atomic Chat.AVChatParticipantView ? _participantView;
    oneway _Atomic Chat.AVChatParticipantView ? _participantViewForReuse;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.AnyCancellable ? _videoInfoCancellable;
    nominal type descriptor for Foundation.UUID ? _videoInfoToken;
    __C.UIView containerView;
    (() -> ())? onViewDidAppear;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat23AVChatPiPViewController_h */
