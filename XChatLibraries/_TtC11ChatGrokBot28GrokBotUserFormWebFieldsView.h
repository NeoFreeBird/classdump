//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot28GrokBotUserFormWebFieldsView_h
#define _TtC11ChatGrokBot28GrokBotUserFormWebFieldsView_h
@import Foundation;

@class ChatGrokBot.GrokBotUserFormValues ?, ChatGrokBot.GrokBotUserFormWebLayout ?, ChatGrokBot.GrokBotUserFormWebMessageRelay, ChatGrokBot.GrokBotUserFormWebNavigationPolicy, Swift.Bool, UIView, _$s10Foundation21NSKeyValueObservationCMn ?, _$sSa -> ChatGrokBot.GrokBotUserFormWebFieldRow, _$sSa -> ChatGrokBot.GrokBotUserFormWebPage.Input, _$sSo9WKWebViewC, _$syycSg;

@interface ChatGrokBot.GrokBotUserFormWebFieldsView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onEditingChange;
    Swift.Bool isEditing;
    Swift.Array -> ChatGrokBot.GrokBotUserFormWebPage.Input inputs;
    ChatGrokBot.GrokBotUserFormWebMessageRelay messageRelay;
    ChatGrokBot.GrokBotUserFormWebNavigationPolicy navigationPolicy;
    Swift.Array -> ChatGrokBot.GrokBotUserFormWebFieldRow rows;
    Swift.Bool showsLabels;
    __C.WKWebView webView;
    ChatGrokBot.GrokBotUserFormValues ? values;
    ChatGrokBot.GrokBotUserFormWebLayout ? appliedLayout;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentOffsetObservation;
    Swift.Bool isLoaded;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot28GrokBotUserFormWebFieldsView_h */
