//
#ifndef _TtC11ChatGrokBot22GrokBotAttachmentStore_h
#define _TtC11ChatGrokBot22GrokBotAttachmentStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, Swift.Bool, _$s10Foundation3URLVMn, _$sSD -> ChatGrokBot.GrokBotAttachmentStoreKey _$sScT -> _$s10Foundation3URLVMn ? _$ss5ErrorMp _$s_pG4task_ _$s10Foundation4UUIDVMn tokent, _$sSh -> ChatGrokBot.GrokBotAttachmentStoreKey, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotAttachmentStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    nominal type descriptor for Foundation.URL rootDirectory;
    nominal type descriptor for Swift.Int64 ? approximateBytes;
    Swift.Dictionary -> ChatGrokBot.GrokBotAttachmentStoreKey Swift.Task -> nominal type descriptor for Foundation.URL ? protocol descriptor for Swift.Error _$s_pG4task_ nominal type descriptor for Foundation.UUID tokent inFlight;
    Swift.Bool isClosed;
    Swift.Set -> ChatGrokBot.GrokBotAttachmentStoreKey touchedKeys;
}

@end

#endif /* _TtC11ChatGrokBot22GrokBotAttachmentStore_h */
