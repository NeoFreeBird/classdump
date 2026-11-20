//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotMcpAppWebView_h
#define _TtC11ChatGrokBot20GrokBotMcpAppWebView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotMcpApp, ChatGrokBot.GrokBotMcpAppBridge, ChatGrokBot.GrokBotMcpAppConnection, ChatGrokBot.GrokBotMcpAppNavigationPolicy, ChatGrokBot.GrokBotMcpAppScriptMessageRelay, ChatGrokBot.GrokBotMcpAppUserActivation, ChatGrokBot.GrokBotMcpAppWebView.Presentation, ChatGrokBot.GrokBotMcpAppWebView.Presentation _$scSg ->, ChatGrokBot.GrokBotMcpAppWebView.State, Swift.Bool, UIView, _$s10Foundation3URLVMn _$scSg ->, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo9WKWebViewC, _$sySo6UIViewCcSg, _$syXlSgXw, _$syycSg;

@interface ChatGrokBot.GrokBotMcpAppWebView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMcpApp app;
    weak Swift.AnyObject? inlineHost;
    (() -> ())? onContentHeightChanged;
    (() -> ())? onExitFullscreenRequest;
    ((__C.UIView) -> ())? onFullscreenRequest;
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLinkRequest;
    ChatGrokBot.GrokBotMcpAppWebView.Presentation _$scSg -> onPresentationChanged;
    (() -> ())? onStateChanged;
    ChatGrokBot.GrokBotMcpAppWebView.Presentation presentation;
    ChatGrokBot.GrokBotMcpAppWebView.State state;
    ChatGrokBot.GrokBotMcpAppBridge bridge;
    ChatGrokBot.GrokBotMcpAppConnection connection;
    ChatGrokBot.GrokBotMcpAppScriptMessageRelay messageRelay;
    ChatGrokBot.GrokBotMcpAppNavigationPolicy navigationPolicy;
    __C.WKWebView webView;
    Swift.Bool didStart;
    nominal type descriptor for CoreGraphics.CGFloat ? inlineMaxWidth;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    nominal type descriptor for CoreGraphics.CGFloat reportedHeight;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? revealFallbackTask;
    ChatGrokBot.GrokBotMcpAppUserActivation userActivation;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapWidget;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot20GrokBotMcpAppWebView_h */
