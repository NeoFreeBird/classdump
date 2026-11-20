//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotVaultImportViewModel_h
#define _TtC11ChatGrokBot27GrokBotVaultImportViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotVaultStream, _$s7Combine9PublishedVMn ChatGrokBot.GrokBotVaultImportPhase, _$sSa -> ChatGrokBot.GrokBotVaultImportRow, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotVaultImportViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published ChatGrokBot.GrokBotVaultImportPhase _phase;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotVaultStream vaultStream;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? importTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? readTask;
    Swift.Array -> ChatGrokBot.GrokBotVaultImportRow readyRows;
}

@end

#endif /* _TtC11ChatGrokBot27GrokBotVaultImportViewModel_h */
