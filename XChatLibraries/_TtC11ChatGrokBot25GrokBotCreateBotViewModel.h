//
#ifndef _TtC11ChatGrokBot25GrokBotCreateBotViewModel_h
#define _TtC11ChatGrokBot25GrokBotCreateBotViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotCreateBotListener ?, ChatGrokBot.GrokBotScribeSource, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotCreateBotViewModel.Phase, _$s7Combine9PublishedVMn GrokBotMark.GrokBotIdentityColor, _$s7Combine9PublishedVMn GrokBotMark.GrokBotMark.Shape, _$s7Combine9PublishedVMn _$sSS, _$sSa -> GrokBotMark.GrokBotMark.Shape, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotCreateBotViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotCreateBotViewModel.Phase _phase;
    nominal type descriptor for Combine.Published Swift.String _name;
    nominal type descriptor for Combine.Published Swift.String _instructions;
    nominal type descriptor for Combine.Published GrokBotMark.GrokBotMark.Shape _shape;
    nominal type descriptor for Combine.Published GrokBotMark.GrokBotIdentityColor _color;
    ChatGrokBot.GrokBotCreateBotListener ? listener;
    Swift.Array -> GrokBotMark.GrokBotMark.Shape offeredLimitedShapes;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotScribeSource source;
}

@end

#endif /* _TtC11ChatGrokBot25GrokBotCreateBotViewModel_h */
