//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCrashReporter_h
#define GADCrashReporter_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSArray, NSObject;

@interface GADCrashReporter : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    NSArray *_crashFileURLs;
    struct atomic_flag { _Atomic _Bool _Value; } _hasReported;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)updateSettings;
- (void)storeEnvironmentInfo;
- (id)symbolTableFileURL;
- (void)reportIssues;
- (void)reportIssuesInternal;
- (void)reportURL:(id)url;

@end

#endif /* GADCrashReporter_h */
