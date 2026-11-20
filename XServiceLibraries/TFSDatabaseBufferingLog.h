//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
