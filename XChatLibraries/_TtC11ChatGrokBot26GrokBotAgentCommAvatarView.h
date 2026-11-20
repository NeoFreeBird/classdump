//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot26GrokBotAgentCommAvatarView_h
#define _TtC11ChatGrokBot26GrokBotAgentCommAvatarView_h
@import Foundation;

@class ChatGrokBot.GrokBotCloudAgentMarkView, ChatGrokBot.GrokBotMentionTarget ?, GrokBotRelay.SandAgentSummary ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewVMn, _$s7SwiftUI5ColorVMn, __C.UIUserInterfaceStyle;

@interface ChatGrokBot.GrokBotAgentCommAvatarView : UIView { // (Swift)
    /* instance variables */
    __C.UIUserInterfaceStyle avatarUserInterfaceStyle;
    nominal type descriptor for CoreGraphics.CGFloat avatarSize;
    ChatGrokBot.GrokBotCloudAgentMarkView cloudAgentMarkView;
    nominal type descriptor for SwiftUI.Color eyeColor;
    nominal type descriptor for SwiftUI.UIHostingController nominal type descriptor for SwiftUI.AnyView hostingController;
    ChatGrokBot.GrokBotMentionTarget ? peer;
    GrokBotRelay.SandAgentSummary ? summary;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot26GrokBotAgentCommAvatarView_h */
