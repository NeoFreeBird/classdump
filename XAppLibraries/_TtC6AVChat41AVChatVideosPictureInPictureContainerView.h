//
#ifndef _TtC6AVChat41AVChatVideosPictureInPictureContainerView_h
#define _TtC6AVChat41AVChatVideosPictureInPictureContainerView_h
@import Foundation;

#include "_TtC6AVChat25AVChatVideosContainerView.h"

@class Chat.AVChatCallParticipantViewModel, Chat.AVChatParticipantVideoView ?, Chat.AVChatUserView ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface AVChat.AVChatVideosPictureInPictureContainerView : AVChat.AVChatVideosContainerView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatUserView ? $__lazy_storage_$_userView;
    oneway _Atomic Chat.AVChatParticipantVideoView ? _customRenderVideoView;
    oneway _Atomic Chat.AVChatCallParticipantViewModel calledUserViewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6AVChat41AVChatVideosPictureInPictureContainerView_h */
