//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox26ColdInboxFindFriendsStream_h
#define _TtC9ChatInbox26ColdInboxFindFriendsStream_h
@import Foundation;

@class ChatModels.ChatContactsSyncing ?, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSS, _$sSbSg, _$sSbyc, _$sSo14NSUserDefaultsC, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ChatInbox.ColdInboxFindFriendsStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsSyncing ? contactsSyncing;
    Swift.String dismissedKey;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isHiddenSubject;
    __C.NSLock lock;
    () -> Swift.Bool readIsFindFriendsEnabled;
    __C.NSUserDefaults userDefaults;
    Swift.Bool isContactsSyncReloadPending;
    Swift.Bool? resolvedIsFindFriendsEnabled;
}

@end

#endif /* _TtC9ChatInbox26ColdInboxFindFriendsStream_h */
