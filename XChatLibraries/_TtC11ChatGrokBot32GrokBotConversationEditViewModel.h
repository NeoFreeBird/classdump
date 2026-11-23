//
#ifndef _TtC11ChatGrokBot32GrokBotConversationEditViewModel_h
#define _TtC11ChatGrokBot32GrokBotConversationEditViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotAgentProfile, ChatGrokBot.GrokBotConversationEditViewModelListener ?, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotVoiceSettings, GrokBotRelay.GrokBotRepository, GrokBotRelay.SandAgentSummary, Swift.Bool, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotConversationEditViewModel.PhotoDraft, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotVoiceSettings, _$s7Combine9PublishedVMn GrokBotMark.GrokBotIdentityColor, _$s7Combine9PublishedVMn GrokBotMark.GrokBotMark.Shape, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$sSSSg, _$sSa -> GrokBotMark.GrokBotMark.Shape, _$sSa -> GrokBotRelay.SandAgentSummary, _$sSo7UIImageCSg, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotConversationEditViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published GrokBotMark.GrokBotIdentityColor _color;
    nominal type descriptor for Combine.Published Swift.String? _failureMessage;
    nominal type descriptor for Combine.Published Swift.Bool _isSaving;
    nominal type descriptor for Combine.Published Swift.String _name;
    nominal type descriptor for Combine.Published GrokBotMark.GrokBotMark.Shape _shape;
    nominal type descriptor for Combine.Published Swift.Bool _showError;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotVoiceSettings _voiceSettings;
    ChatGrokBot.GrokBotConversationEditViewModelListener ? listener;
    Swift.Array -> GrokBotRelay.SandAgentSummary members;
    Swift.Array -> GrokBotMark.GrokBotMark.Shape offeredLimitedShapes;
    Swift.Bool showsVoiceSettings;
    GrokBotRelay.SandAgentSummary summary;
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotConversationEditViewModel.PhotoDraft _photoDraft;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    __C.UIImage? savedPhotoAvatar;
    ChatGrokBot.GrokBotAgentProfile savedProfile;
    ChatGrokBot.GrokBotVoiceSettings savedVoiceSettings;
}

@end

#endif /* _TtC11ChatGrokBot32GrokBotConversationEditViewModel_h */
