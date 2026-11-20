//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat31AVChatCurrentUserViewController_h
#define _TtC6AVChat31AVChatCurrentUserViewController_h
@import Foundation;

@class Chat.AVChatCurrentUserViewController.SnappingBehavior, Chat.AVChatCurrentUserViewModel, Chat.AVChatParticipantView ?, Swift.Bool, TFNViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo6UIViewCSg, _$sySb_ __C.CGPoint _$sA2AtcSg, __C.CGPoint, __C.CGRect, __C.CGSize;

@interface AVChat.AVChatCurrentUserViewController : TFNViewController { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCurrentUserViewModel _viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatParticipantView ? _participantView;
    __C.UIView? _pipTransitionPlaceholderView;
    oneway _Atomic Chat.AVChatCurrentUserViewController.SnappingBehavior snappingBehaviour;
    Swift.Bool keepRelativePositionOnFloatingFrameChange;
    __C.CGRect floatingFrame;
    Swift.Bool _didSetFloatingFrame;
    __C.CGSize floatingSize;
    __C.CGPoint floatingCenter;
     empty-list Swift.Bool first-element-marker  __C.CGPoint _$sA2AtcSg layoutHandler;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_handlePanGesture:(id)gesture;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat31AVChatCurrentUserViewController_h */
