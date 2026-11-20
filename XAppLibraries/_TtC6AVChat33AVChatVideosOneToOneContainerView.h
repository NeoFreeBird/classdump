//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat33AVChatVideosOneToOneContainerView_h
#define _TtC6AVChat33AVChatVideosOneToOneContainerView_h
@import Foundation;

#include "_TtC6AVChat25AVChatVideosContainerView.h"

@class Chat.AVChatCallViewModel, Chat.AVChatUserView ?, Chat.AudioHeaderView ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo15TFNFloatingViewCSg, _$sSo9TFNButtonCSg;

@interface AVChat.AVChatVideosOneToOneContainerView : AVChat.AVChatVideosContainerView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCallViewModel chatViewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.TFNFloatingView? $__lazy_storage_$_floatingView;
    oneway _Atomic Chat.AVChatUserView ? $__lazy_storage_$_currentUserView;
    oneway _Atomic Chat.AVChatUserView ? $__lazy_storage_$_calledUserView;
    oneway _Atomic Chat.AudioHeaderView ? $__lazy_storage_$_audioHeaderView;
    __C.TFNButton? $__lazy_storage_$_flipCameraButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;
- (void)didTapFlipCamera;

@end

#endif /* _TtC6AVChat33AVChatVideosOneToOneContainerView_h */
