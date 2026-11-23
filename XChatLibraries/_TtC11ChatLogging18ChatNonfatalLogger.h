//
#ifndef _TtC11ChatLogging18ChatNonfatalLogger_h
#define _TtC11ChatLogging18ChatNonfatalLogger_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainXLogger-Protocol.h"

@class ChatLogging0A19NonFatalErrorLogger_p, NSString, Subsystem_ios_iosArm64_mainLogLevel, _$s7XKotlin8LogLevelOMn, _$sSS, _TtCs12_SwiftObject;

@interface ChatLogging.ChatNonfatalLogger : Swift._SwiftObject <Subsystem_ios_iosArm64_mainXLogger> { // (Swift)
    /* instance variables */
    ChatLogging0A19NonFatalErrorLogger_p nonFatalErrorLogger;
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

@end

#endif /* _TtC11ChatLogging18ChatNonfatalLogger_h */
