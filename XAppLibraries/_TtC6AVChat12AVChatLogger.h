//
#ifndef _TtC6AVChat12AVChatLogger_h
#define _TtC6AVChat12AVChatLogger_h
@import Foundation;

@class Chat.AVChatSharedStateStore, Swift.Bool, _$s10Foundation4UUIDVMn, _$sSi, _$sSo17TFNTwitterAccountC, _$sySD -> _$ss11AnyHashableVMn _$sypGcSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatLogger : Swift._SwiftObject { // (Swift)
    /* instance variables */
     empty-list Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$sypGcSg customLogger;
     empty-list Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable _$sypGcSg customScribeLogger;
    __C.TFNTwitterAccount account;
    nominal type descriptor for Foundation.UUID uuid;
    Swift.Bool areErrorsLogsEnabled;
    Swift.Bool areDebugLogsEnabled;
    oneway _Atomic Chat.AVChatSharedStateStore sharedStateStore;
    Swift.Int numberOfErrorsLogged;
}

@end

#endif /* _TtC6AVChat12AVChatLogger_h */
