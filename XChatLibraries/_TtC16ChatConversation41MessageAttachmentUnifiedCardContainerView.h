//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation41MessageAttachmentUnifiedCardContainerView_h
#define _TtC16ChatConversation41MessageAttachmentUnifiedCardContainerView_h
@import Foundation;

@class ChatConversation.MessageAttachmentURLView, ChatUI.UnifiedCardAttachmentViewBuildable ?, ChatUI.UnifiedCardAttachmentViewConfiguration ?, ChatUI.UnifiedCardAttachmentViewable _$s_So6UIViewCXcSg, UIView, _$s12CoreGraphics7CGFloatVMn;

@interface ChatConversation.MessageAttachmentUnifiedCardContainerView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageAttachmentURLView fallbackView;
    ChatUI.UnifiedCardAttachmentViewBuildable ? builder;
    ChatUI.UnifiedCardAttachmentViewConfiguration ? configuration;
    ChatUI.UnifiedCardAttachmentViewable _$s_So6UIViewCXcSg builtView;
    nominal type descriptor for CoreGraphics.CGFloat builtWidth;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation41MessageAttachmentUnifiedCardContainerView_h */
