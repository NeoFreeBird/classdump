//
#ifndef TFSTwitterLegacyScribeConfiguration_Protocol_h
#define TFSTwitterLegacyScribeConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterLegacyScribeConfiguration <NSObject>

@required

@property _Bool shouldScribeError;
@property _Bool debugEnabled;
@property (nonatomic) long long maxSampleSize;
@property _Bool usesCompactPersistence;
@property _Bool flushesAllPersistenceStrategies;

/* required instance methods */
- (_Bool)isDebugEnabled;

@optional

@end

#endif /* TFSTwitterLegacyScribeConfiguration_Protocol_h */
