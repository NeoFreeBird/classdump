//
#ifndef APMPFunctionLog_h
#define APMPFunctionLog_h
@import Foundation;

#include "APMPFunctionValue.h"
#include "APMPLoggerDelegate-Protocol.h"

@interface APMPFunctionLog : APMPFunctionValue {
    /* instance variables */
    _Bool _silent;
    _Bool _monitored;
    id <APMPLoggerDelegate> _logger;
}

/* instance methods */
- (id)initWithLogger:(id)logger silent:(_Bool)silent monitored:(_Bool)monitored;
- (id)invokeWithArguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPFunctionLog_h */
