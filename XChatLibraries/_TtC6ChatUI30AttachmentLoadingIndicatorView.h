//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI30AttachmentLoadingIndicatorView_h
#define _TtC6ChatUI30AttachmentLoadingIndicatorView_h
@import Foundation;

@class ChatUI.ActivityIndicatorView, UIView, _$s7Combine14AnyCancellableCMn ?;

@interface ChatUI.AttachmentLoadingIndicatorView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ActivityIndicatorView indicatorView;
    nominal type descriptor for Combine.AnyCancellable ? progressCancellable;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC6ChatUI30AttachmentLoadingIndicatorView_h */
