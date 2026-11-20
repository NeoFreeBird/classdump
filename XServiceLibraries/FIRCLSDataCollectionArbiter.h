//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSDataCollectionArbiter_h
#define FIRCLSDataCollectionArbiter_h
@import Foundation;

#include "FBLPromise.h"
#include "FIRApp.h"

@class NSDictionary, NSLock, NSObject;

@interface FIRCLSDataCollectionArbiter : NSObject {
    /* instance variables */
    NSLock *_mutex;
    FBLPromise *_dataCollectionEnabled;
    _Bool _promiseResolved;
    FIRApp *_app;
    NSDictionary *_appInfo;
}

/* class methods */
+ (_Bool)isCrashlyticsCollectionEnabledWithApp:(id)app withAppInfo:(id)info;
+ (long long)stickySetting;

/* instance methods */
- (id)initWithApp:(id)app withAppInfo:(id)info;
- (_Bool)isLegacyDataCollectionKeyInPlist;
- (_Bool)isCrashlyticsCollectionEnabled;
- (void)setCrashlyticsCollectionEnabled:(_Bool)enabled;
- (id)waitForCrashlyticsCollectionEnabled;

@end

#endif /* FIRCLSDataCollectionArbiter_h */
