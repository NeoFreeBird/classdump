//
#ifndef _TtC11ChatGrokBot19GrokBotMcpAppBridge_h
#define _TtC11ChatGrokBot19GrokBotMcpAppBridge_h
@import Foundation;

@class ChatGrokBot.GrokBotMcpAppResource ?, Swift.Bool, Swift.Bool _$s10Foundation3URLVMn _$scSg, _$s12CoreGraphics7CGFloatVMn _$sSg_ABtcSg ->, _$sS2S_SS ChatGrokBot.GrokBotMcpAppToolCallActivation _$stYaKScMYccSg, _$sS2ScSg, _$sSDySSypG, _$sSDySSypGSg, _$sSDySiScTyyt _$ss5NeverOMn, _$sSbycSg, _$sSi, _$sySDySSypGcSg, _$sySbcSg, _$syycSg, _$syycSgycSg, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotMcpAppBridge : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onInitialized;
    Swift.Bool nominal type descriptor for Foundation.URL _$scSg onOpenLink;
    ((Swift.String) -> Swift.String)? onRequestDisplayMode;
    nominal type descriptor for CoreGraphics.CGFloat _$sSg_ABtcSg -> onSizeChanged;
    ((Swift.Bool) -> ())? onToolCallFinished;
    (() -> Swift.Bool)? onToolCallStarted;
    (([Swift.String : Any]) -> ())? sendMessage;
    (() -> (() -> ())?)? spendUserActivation;
    Swift.Bool isInitialized;
    Swift.StringSwift.String first-element-marker Swift.String ChatGrokBot.GrokBotMcpAppToolCallActivation _$stYaKScMYccSg callTool;
    Swift.Bool didSendResource;
    Swift.Bool didSendToolInput;
    Swift.Bool didSendToolResult;
    [Swift.String : Any] hostContext;
    Swift.Bool isProxyReady;
    Swift.Int nextRequestID;
    Swift.Int nextToolCallKey;
    Swift.Dictionary empty-list Swift.IntSwift.Task empty-list () nominal type descriptor for Swift.Never pendingToolCalls;
    ChatGrokBot.GrokBotMcpAppResource ? resource;
    [Swift.String : Any]? toolInputArguments;
    [Swift.String : Any]? toolResultPayload;
}

@end

#endif /* _TtC11ChatGrokBot19GrokBotMcpAppBridge_h */
