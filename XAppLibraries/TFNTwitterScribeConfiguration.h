//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribeConfiguration_h
#define TFNTwitterScribeConfiguration_h
@import Foundation;

#include "TFSTwitterLegacyScribeConfiguration-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterScribeConfiguration : NSObject <TFSTwitterLegacyScribeConfiguration>

@property _Bool shouldScribeError;
@property _Bool debugEnabled;
@property _Bool consoleLoggingEnabled;
@property (nonatomic) long long maxSampleSize;
@property _Bool usesCompactPersistence;
@property _Bool flushesAllPersistenceStrategies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedConfiguration;

/* instance methods */
- (id)init;
- (_Bool)isDebugEnabled;
- (_Bool)isConsoleLoggingEnabled;

@end

#endif /* TFNTwitterScribeConfiguration_h */
