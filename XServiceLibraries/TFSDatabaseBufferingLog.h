//
#ifndef TFSDatabaseBufferingLog_h
#define TFSDatabaseBufferingLog_h
@import Foundation;

#include "TFSDatabaseLog-Protocol.h"

@class NSMutableArray, NSObject;

@interface TFSDatabaseBufferingLog : NSObject <TFSDatabaseLog> {
    /* instance variables */
    id <TFSDatabaseLog> _targetLog;
    NSMutableArray *_errors;
}

/* instance methods */
- (void)logError:(id)error;
- (void)logDebug:(id)debug;
- (_Bool)debugEnabled;

@end

#endif /* TFSDatabaseBufferingLog_h */
