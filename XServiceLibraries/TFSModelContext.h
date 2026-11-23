//
#ifndef TFSModelContext_h
#define TFSModelContext_h
@import Foundation;

#include "TFSModelCacheEventCounts.h"
#include "_TtP8TFSModel20ModelContextScribing_-Protocol.h"
#include "_TtP8TFSModel39ModelContextDiagnosticMetadataProviding_-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TFSModelContext : NSObject <TFSModel.ModelContextDiagnosticMetadataProviding> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 cacheStorage;
    B24@0:8@"NSString"16 dependencyGraph;
    B24@0:8@"NSString"16 assimilationCacheQueue;
    B24@0:8@"NSString"16 configuration;
    B24@0:8@"NSString"16 internalCacheConfiguration;
    B24@0:8@"NSString"16 errorLogger;
    B24@0:8@"NSString"16 modelRegistry;
    B24@0:8@"NSString"16 logger;
    B24@0:8@"NSString"16 initializationDurationSeconds;
    B24@0:8@"NSString"16 scriberStorage;
}

@property (nonatomic, readonly) NSString *diagnosticMetadata;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, retain) id <TFSModel.ModelContextScribing> scriber;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) TFSModelCacheEventCounts *cacheEventCounts;
@property (nonatomic, readonly) NSNumber *diskCacheSizeBytes;

/* instance methods */
- (void)flushWithCompletion:(id /* block */)completion;
- (void)replaceWithFreshCacheWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TFSModelContext_h */
