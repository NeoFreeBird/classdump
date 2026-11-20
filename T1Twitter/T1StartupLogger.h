//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StartupLogger_h
#define T1StartupLogger_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSMutableArray, NSObject;

@interface T1StartupLogger : NSObject {
    /* instance variables */
    NSMutableArray *_startupPerftownLogs;
    NSMutableArray *_startupClientEventLogs;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

/* class methods */
+ (id)sharedLogger;

/* instance methods */
- (id)init;
- (void)logAction:(id)action element:(id)element;
- (void)log:(id)log stopwatch:(id)stopwatch event:(id)event;
- (void)log:(id)log duration:(double)duration eventEndTime:(double)time event:(id)event;
- (void)flushToScribe:(id)scribe;
- (void)finishLogging;
- (_Bool)isFinished;

@end

#endif /* T1StartupLogger_h */
