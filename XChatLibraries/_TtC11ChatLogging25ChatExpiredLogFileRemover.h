//
#ifndef _TtC11ChatLogging25ChatExpiredLogFileRemover_h
#define _TtC11ChatLogging25ChatExpiredLogFileRemover_h
@import Foundation;

@class ChatLogging.ChatLogRetentionPolicy, _$sSSyc, _$sSo13NSFileManagerC, _TtCs12_SwiftObject;

@interface ChatLogging.ChatExpiredLogFileRemover : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSFileManager fileManager;
    () -> Swift.String logsDirectory;
    ChatLogging.ChatLogRetentionPolicy retentionPolicy;
}

@end

#endif /* _TtC11ChatLogging25ChatExpiredLogFileRemover_h */
