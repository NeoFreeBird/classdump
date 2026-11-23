//
#ifndef _TtC11ChatGrokBot25GrokBotTemplateShareStore_h
#define _TtC11ChatGrokBot25GrokBotTemplateShareStore_h
@import Foundation;

@class ChatGrokBot.GrokBotScribing, ChatModels.ChatToastActionTriggerStream, GrokBotRelay.GrokBotRepository, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn ChatGrokBot.GrokBotTemplateShareState _$ss5NeverOMn, _$sSS, _$sSo31UINotificationFeedbackGeneratorC, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotTemplateShareStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String agentID;
    __C.UINotificationFeedbackGenerator feedbackGenerator;
    GrokBotRelay.GrokBotRepository repository;
    ChatGrokBot.GrokBotScribing scriber;
    nominal type descriptor for Combine.CurrentValueSubject ChatGrokBot.GrokBotTemplateShareState nominal type descriptor for Swift.Never stateSubject;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Bool isLoadingExportPolicy;
    Swift.Bool isLoadingSourceTemplate;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotTemplateShareStore_h */
