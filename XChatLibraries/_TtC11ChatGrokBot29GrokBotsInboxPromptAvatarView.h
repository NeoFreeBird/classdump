//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot29GrokBotsInboxPromptAvatarView_h
#define _TtC11ChatGrokBot29GrokBotsInboxPromptAvatarView_h
@import Foundation;

@class ChatGrokBot.GrokBotHostingView, GrokBotMark.GrokBotIdentityColor, GrokBotMark.GrokBotMark.Shape, GrokBotMark.GrokBotMark.State, UIBezierPath, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12UIBezierPathCSg;

@interface ChatGrokBot.GrokBotsInboxPromptAvatarView : UIView { // (Swift)
    /* instance variables */
    GrokBotMark.GrokBotMark.State state;
    __C.UIBezierPath? boundingPath;
    GrokBotMark.GrokBotIdentityColor color;
    ChatGrokBot.GrokBotHostingView hostingView;
    nominal type descriptor for CoreGraphics.CGFloat markSize;
    GrokBotMark.GrokBotMark.Shape shape;
}

@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot29GrokBotsInboxPromptAvatarView_h */
