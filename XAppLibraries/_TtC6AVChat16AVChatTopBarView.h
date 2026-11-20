//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat16AVChatTopBarView_h
#define _TtC6AVChat16AVChatTopBarView_h
@import Foundation;

@class Chat.AVChatInfoItemsView, Chat.AVChatTopBarViewModel, Swift.Bool, UIView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIStackViewC, _$sSo7UILabelC, _$sSo8TFSTimerCSg, _$sSo9TFNButtonC;

@interface AVChat.AVChatTopBarView : UIView { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatTopBarViewModel _viewModel;
    __C.UIStackView _verticalStackView;
    __C.TFNButton fullscreenButton;
    __C.TFNButton minimizeButton;
    __C.UILabel _timeLabel;
    __C.UIStackView _titleStackView;
    __C.UILabel _titleLabel;
    oneway _Atomic Chat.AVChatInfoItemsView _infoItemsView;
    Swift.Bool isFullscreenEnabled;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    __C.TFSTimer? _timer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_didTapMinimizeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat16AVChatTopBarView_h */
