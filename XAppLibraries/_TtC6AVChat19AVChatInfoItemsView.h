//
#ifndef _TtC6AVChat19AVChatInfoItemsView_h
#define _TtC6AVChat19AVChatInfoItemsView_h
@import Foundation;

@class Chat.AVChatAudioInputInfoView, Chat.AVChatInfoItemView, Chat.AVChatInfoItemsView.SupportedItems, Chat.AVChatInfoItemsViewModel ?, UIView, _$s7Combine9PublishedVMn __C.CGSize, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIStackViewC, __C.CGSize;

@interface AVChat.AVChatInfoItemsView : UIView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatInfoItemsView.SupportedItems supportedItems;
    oneway _Atomic Chat.AVChatInfoItemsViewModel ? _viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatAudioInputInfoView _audioInputView;
    oneway _Atomic Chat.AVChatInfoItemView _cameraInfoItemView;
    oneway _Atomic Chat.AVChatInfoItemView _screenShareInfoItemView;
    oneway _Atomic Chat.AVChatInfoItemView _raisedHandInfoItemView;
    __C.UIStackView _infoItemsStackView;
    __C.CGSize itemSize;
    nominal type descriptor for Combine.Published __C.CGSize _preferredContentSize;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat19AVChatInfoItemsView_h */
