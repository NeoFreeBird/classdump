//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails32ConversationAttachmentTabBarView_h
#define _TtC23ChatConversationDetails32ConversationAttachmentTabBarView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentTabBarViewListener ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> ChatConversationDetails.ConversationAttachmentTab, _$sSaySo8UIButtonCG, _$sSo6UIViewC;

@interface ChatConversationDetails.ConversationAttachmentTabBarView : UIView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentTabBarViewListener ? listener;
    nominal type descriptor for CoreGraphics.CGFloat pagePosition;
    [__C.UIButton] buttons;
    Swift.Array -> ChatConversationDetails.ConversationAttachmentTab tabs;
    __C.UIView indicatorView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23ChatConversationDetails32ConversationAttachmentTabBarView_h */
