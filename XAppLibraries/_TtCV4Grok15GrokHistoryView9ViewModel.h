//
#ifndef _TtCV4Grok15GrokHistoryView9ViewModel_h
#define _TtCV4Grok15GrokHistoryView9ViewModel_h
@import Foundation;

@class Grok.GatewayConversationLiveBadgeRefresher, Grok.GrokConversationsProvider, Grok.GrokDelegate ?, Grok.GrokHistorySearchViewModel, Grok.GrokMediaProvider, Grok.GrokSettingsProvider, Grok0A18AccountPerspective_p, _$s7Combine9PublishedVMn Grok.GrokHistoryConversation ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$sSo13TFNScribeSink_p, _$sSo23TFSTwitterScribeContextC, _TtCs12_SwiftObject;

@interface Grok.GrokHistoryView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokDelegate ? delegate;
    Grok.GrokConversationsProvider conversationProvider;
    Grok0A18AccountPerspective_p account;
    __C.TFNScribeSink scribeSink;
    __C.TFSTwitterScribeContext scribeContext;
    Grok.GrokSettingsProvider settingsProvider;
    Grok.GrokMediaProvider mediaProvider;
    Grok.GrokHistorySearchViewModel search;
    Grok.GatewayConversationLiveBadgeRefresher liveBadgeRefresher;
    nominal type descriptor for Combine.Published Swift.Bool _presentRenameAlert;
    nominal type descriptor for Combine.Published Swift.String _convoTitleText;
    nominal type descriptor for Combine.Published Grok.GrokHistoryConversation ? _selectedConvo;
}

@end

#endif /* _TtCV4Grok15GrokHistoryView9ViewModel_h */
