//
#ifndef APMASLLogger_h
#define APMASLLogger_h
@import Foundation;

#include "APMLogging-Protocol.h"

@class NSObject, NSString;

@interface APMASLLogger : NSObject <APMLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)GULLoggerLevelFromLogLevel:(long long)level;

/* instance methods */
- (void)logMessage:(id)message logTag:(id)tag messageCode:(long long)code withLogLevel:(long long)level;

@end

#endif /* APMASLLogger_h */
