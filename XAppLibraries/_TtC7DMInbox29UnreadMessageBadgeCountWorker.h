//
#ifndef _TtC7DMInbox29UnreadMessageBadgeCountWorker_h
#define _TtC7DMInbox29UnreadMessageBadgeCountWorker_h
@import Foundation;

@class DMModels.BadgeCountStream, _$s10ChatModels24UnreadMessageCountStreamCMn, _$s11ChatGrokBot0B21BotsUnreadCountStreamCMn, _$s11XFoundation13CombineWorkerCN;

@interface DMInbox.UnreadMessageBadgeCountWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DMModels.BadgeCountStream badgeCountStream;
    nominal type descriptor for ChatGrokBot.GrokBotsUnreadCountStream grokBotsUnreadCountStream;
    nominal type descriptor for ChatModels.UnreadMessageCountStream unreadMessageCountStream;
}

@end

#endif /* _TtC7DMInbox29UnreadMessageBadgeCountWorker_h */
