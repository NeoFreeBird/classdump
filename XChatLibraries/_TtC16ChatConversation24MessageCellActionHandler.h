//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation24MessageCellActionHandler_h
#define _TtC16ChatConversation24MessageCellActionHandler_h
@import Foundation;

@class ChatAttachmentViewer.AttachmentVideoPlayerProviding, ChatConversation.ConversationActionTriggerStreamV2, ChatConversation.MessageBookingLinkResolving, ChatConversation.MessageComposerTargetResolving, ChatConversation.MessageReactionAnimationTriggerStream, ChatConversation.MessageReactionSending, ChatConversation.MessageTapActionPluginPoint, ChatConversationServices.ConversationSource, ChatKotlin.ConversationObjectGraphProvider, ChatKotlin.ObjectGraphProvider, ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerSendCoordinating, ChatModels.AudioPlaybackStream, ChatModels.ConversationChatItemsStream, ChatUI.AttachmentMediaService, ChatUI.ChatColorProviding, ChatUI.ChatImageLoading, ChatUI.JetfuelEventsHandlerBuildable, ChatUI.UnifiedCardAttachmentViewBuildable ?, ChatUtilities.AudioSessionArbitrating, ChatUtilities.ChatSettingsProvider, NSObject, Swift.Bool, XVideo.PostVideoProviding ?, _$s10JetfuelSDK13EventsHandlerMp ?, _$s4XGif14GifImageLoaderCMn, _$s8XJetfuel0A7RuntimeCMn ?, _$sSo014Subsystem_ios_B39Arm64_mainMediaAttachmentResolveDeciderC, _$sSo16UIViewControllerCSgXw;

@interface ChatConversation.MessageCellActionHandler : NSObject { // (Swift)
    /* instance variables */
    Swift.Bool areInteractionsDisabled;
    ChatConversationServices.ConversationSource conversationSource;
    ChatModels.AudioPlaybackStream audioPlaybackStream;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    ChatUI.ChatImageLoading imageLoader;
    ChatUI.AttachmentMediaService attachmentMediaService;
    protocol descriptor for JetfuelSDK.EventsHandler ? $__lazy_storage_$_jetfuelEventsHandler;
    nominal type descriptor for XJetfuel.XJetfuelRuntime ? jetfuelRuntime;
    ChatUI.UnifiedCardAttachmentViewBuildable ? unifiedCardAttachmentViewBuilder;
    XVideo.PostVideoProviding ? postVideoProvider;
    ChatUtilities.AudioSessionArbitrating audioSessionArbiter;
    ChatAttachmentViewer.AttachmentVideoPlayerProviding attachmentVideoPlayerProvider;
    Swift.Bool isInlineVideoAutoplayEnabled;
    Swift.Bool isReactionPopEnabled;
    ChatConversation.MessageReactionAnimationTriggerStream messageReactionAnimationTriggerStream;
    Swift.Bool hidesInlineVideoPlayButton;
    ChatUtilities.ChatSettingsProvider settingsProvider;
    ChatUI.ChatColorProviding colorProvider;
    Swift.Bool usesVideoLinkPostCard;
    ChatConversation.MessageBookingLinkResolving bookingLinkResolver;
    ChatKotlin.ConversationObjectGraphProvider conversationObjectGraphProvider;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatUI.JetfuelEventsHandlerBuildable jetfuelEventsHandlerBuilder;
    __C.Subsystem_ios_iosArm64_mainMediaAttachmentResolveDecider linkResolveDecider;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageComposerSendCoordinating messageComposerSendCoordinator;
    ChatConversation.MessageTapActionPluginPoint messageTapActionPluginPoint;
    ChatConversation.ConversationActionTriggerStreamV2 conversationActionTriggerStreamV2;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatConversation.MessageComposerTargetResolving messageComposerTargetResolver;
    ChatConversation.MessageReactionSending messageReactionSender;
    weak __C.UIViewController? presentingViewController;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC16ChatConversation24MessageCellActionHandler_h */
