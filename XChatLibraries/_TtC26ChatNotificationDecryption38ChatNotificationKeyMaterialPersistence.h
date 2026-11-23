//
#ifndef _TtC26ChatNotificationDecryption38ChatNotificationKeyMaterialPersistence_h
#define _TtC26ChatNotificationDecryption38ChatNotificationKeyMaterialPersistence_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatDatabase.ChatDatabaseKeyStore ?, ChatDatabase.ChatDatabaseLocation ?, ChatDatabase.ChatSQLiteDatabase ?, _$ss5ErrorMp ?, _TtCs12_SwiftObject;

@interface ChatNotificationDecryption.ChatNotificationKeyMaterialPersistence : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatDatabase.ChatDatabaseLocation ? location;
    ChatDatabase.ChatDatabaseKeyStore ? keyStore;
    ChatDatabase.ChatSQLiteDatabase ? database;
    protocol descriptor for Swift.Error ? databaseError;
}

@end

#endif /* _TtC26ChatNotificationDecryption38ChatNotificationKeyMaterialPersistence_h */
