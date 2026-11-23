//
#ifndef _TtC12ChatDatabase28ChatDatabaseTransactionScope_h
#define _TtC12ChatDatabase28ChatDatabaseTransactionScope_h
@import Foundation;

@class ChatDatabase.ChatDatabaseTransactionActions, _$sSO, _TtCs12_SwiftObject;

@interface ChatDatabase.ChatDatabaseTransactionScope : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.ObjectIdentifier databaseID;
    ChatDatabase.ChatDatabaseTransactionActions commitActions;
    ChatDatabase.ChatDatabaseTransactionActions completionActions;
    ChatDatabase.ChatDatabaseTransactionActions rollbackActions;
}

@end

#endif /* _TtC12ChatDatabase28ChatDatabaseTransactionScope_h */
