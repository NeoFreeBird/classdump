//
#ifndef _TtC11ChatSession17ChatSessionStream_h
#define _TtC11ChatSession17ChatSessionStream_h
@import Foundation;

@class ChatSession.ChatOrphanRecoveryLedger, _$s7Combine19CurrentValueSubjectCMn _$sySa -> ChatSession.ChatSessionRegistration _$sG _$ss5NeverOMn, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ChatSession.ChatSessionStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> ChatSession.ChatSessionRegistration _$sG nominal type descriptor for Swift.Never subject;
    __C.NSLock updateLock;
    ChatSession.ChatOrphanRecoveryLedger orphanRecoveryLedger;
}

@end

#endif /* _TtC11ChatSession17ChatSessionStream_h */
