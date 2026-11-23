//
#ifndef _TtC14DMConversation46ConversationNavigationBarAvatarTitleViewPlugin_h
#define _TtC14DMConversation46ConversationNavigationBarAvatarTitleViewPlugin_h
@import Foundation;

@class DMConversation.ConversationNavigationBarTitleViewPluginContext, DMUI.AvatarViewModelBuilder, DMUI.UserBadgesImageBuilder, _$s10ChatModels26ConversationMetadataStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface DMConversation.ConversationNavigationBarAvatarTitleViewPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DMUI.AvatarViewModelBuilder avatarViewModelBuilder;
    DMConversation.ConversationNavigationBarTitleViewPluginContext context;
    nominal type descriptor for ChatModels.ConversationMetadataStream conversationMetadataStream;
    DMUI.UserBadgesImageBuilder userBadgesImageBuilder;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)didTap:(id)tap;

@end

#endif /* _TtC14DMConversation46ConversationNavigationBarAvatarTitleViewPlugin_h */
