//
#ifndef TFSTwitterLegacyScribeConfiguration_Protocol_h
#define TFSTwitterLegacyScribeConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterLegacyScribeConfiguration <NSObject>

@required

@property (nonatomic) _Bool shouldScribeError;
@property (nonatomic) _Bool debugEnabled;
@property (nonatomic) _Bool debugEnabled;
@property (nonatomic) long long maxSampleSize;
@property (nonatomic) _Bool usesCompactPersistence;
@property (nonatomic) _Bool flushesAllPersistenceStrategies;

/* required instance methods */
- (_Bool)isDebugEnabled;
- (_Bool)isDebugEnabled;

@optional

@end

#endif /* TFSTwitterLegacyScribeConfiguration_Protocol_h */
