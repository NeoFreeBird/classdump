//
#ifndef _TtC6AVChat13AVChatContext_h
#define _TtC6AVChat13AVChatContext_h
@import Foundation;

@class Chat.AVChatLogger, Chat.AVChatSharedStateStore, _$s10Foundation4UUIDVMn, _$sSo17TFNTwitterAccountC, _TtCs12_SwiftObject;

@interface AVChat.AVChatContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for Foundation.UUID uuid;
    oneway _Atomic Chat.AVChatSharedStateStore sharedStateStore;
    oneway _Atomic Chat.AVChatLogger logger;
}

@end

#endif /* _TtC6AVChat13AVChatContext_h */
