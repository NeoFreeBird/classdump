//
#ifndef _TtC16ChatConversation37MessageAttachmentJetfuelContainerView_h
#define _TtC16ChatConversation37MessageAttachmentJetfuelContainerView_h
@import Foundation;

@class ChatConversation.MessageAttachmentJetfuelContainerView.CachedSize ?, ChatConversation.MessageAttachmentURLView, ChatModels.JetfuelAttachment ?, UIView, _$s10JetfuelSDK13EventsHandlerMp ?, _$s12CoreGraphics7CGFloatVMn, _$s8XJetfuel0A7RuntimeCMn ?, _$sSSSg, _$sSo16UIViewControllerCSgXw, _$sSo6UIViewCSg;

@interface ChatConversation.MessageAttachmentJetfuelContainerView : UIView { // (Swift)
    /* instance variables */
    __C.UIView? contentView;
    ChatConversation.MessageAttachmentURLView fallbackView;
    ChatModels.JetfuelAttachment ? attachment;
    protocol descriptor for JetfuelSDK.EventsHandler ? eventsHandler;
    nominal type descriptor for XJetfuel.XJetfuelRuntime ? runtime;
    Swift.String? payload;
    nominal type descriptor for CoreGraphics.CGFloat builtWidth;
    Swift.String? builtPayload;
    protocol descriptor for JetfuelSDK.EventsHandler ? builtEventsHandler;
    ChatConversation.MessageAttachmentJetfuelContainerView.CachedSize ? cachedSize;
    weak __C.UIViewController? presenter;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation37MessageAttachmentJetfuelContainerView_h */
