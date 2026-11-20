//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatLogging14ChatDiskLogger_h
#define _TtC11ChatLogging14ChatDiskLogger_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainXLogger-Protocol.h"

@class ChatLogging.ChatLogFileNameFormatter, DispatchQueue, NSString, Subsystem_ios_iosArm64_mainLogLevel, Swift.Bool, _$s7XKotlin8LogLevelOMn, _$sSS, _$sSSyc, _$sSo13NSFileManagerC, _$sSo15NSDateFormatterC, _TtCs12_SwiftObject;

@interface ChatLogging.ChatDiskLogger : Swift._SwiftObject <Subsystem_ios_iosArm64_mainXLogger> { // (Swift)
    /* instance variables */
    __C.NSDateFormatter dateFormatter;
    ChatLogging.ChatLogFileNameFormatter fileNameFormatter;
    __C.NSFileManager fileManager;
    DispatchQueue logQueue;
    () -> Swift.String logsDirectory;
    Swift.String prefix;
    Swift.Bool isSuspended;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainLogLevel *minLogLevel;

/* instance methods */
- (void)dTag:(id)tag message:(id)message throwable:(id)throwable;
- (void)eTag:(id)tag error:(id)error message:(id)message;
- (void)iTag:(id)tag message:(id)message throwable:(id)throwable;
- (void)vTag:(id)tag message:(id)message;
- (void)wTag:(id)tag throwable:(id)throwable message:(id)message;
- (void)flush;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;

@end

#endif /* _TtC11ChatLogging14ChatDiskLogger_h */
