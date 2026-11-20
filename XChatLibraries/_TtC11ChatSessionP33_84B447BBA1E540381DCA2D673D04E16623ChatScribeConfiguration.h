//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16623ChatScribeConfiguration_h
#define _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16623ChatScribeConfiguration_h
@import Foundation;

#include "TFSTwitterLegacyScribeConfiguration-Protocol.h"

@class NSObject;

@interface ChatSession.(ChatScribeConfiguration in _84B447BBA1E540381DCA2D673D04E166) : NSObject <TFSTwitterLegacyScribeConfiguration> { // (Swift)
    /* instance variables */
    _Bool isDebugEnabled;
}

@property (nonatomic) _Bool shouldScribeError;
@property (nonatomic) _Bool debugEnabled;
@property (nonatomic) long long maxSampleSize;
@property (nonatomic) _Bool usesCompactPersistence;
@property (nonatomic) _Bool flushesAllPersistenceStrategies;

/* instance methods */
- (_Bool)isDebugEnabled;
- (id)init;

@end

#endif /* _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16623ChatScribeConfiguration_h */
