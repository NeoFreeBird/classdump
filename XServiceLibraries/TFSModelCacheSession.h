//
#ifndef TFSModelCacheSession_h
#define TFSModelCacheSession_h
@import Foundation;

#include "TFSDatabaseLog-Protocol.h"
#include "TFSModelCache.h"
#include "TFSModelCacheConfiguration.h"
#include "TFSModelCacheEventCounts.h"
#include "TFSModelCacheSessionIfDebug.h"

@class NSArray, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TFSModelCacheSession : NSObject <TFSDatabaseLog> {
    /* instance variables */
    TFSModelCache *_cache;
    TFSModelCacheConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TFSModelCacheSessionIfDebug *ifDebug;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) _Bool hasError;
@property (readonly, nonatomic) TFSModelCacheEventCounts *eventCounts;

/* class methods */
+ (void)initialize;
+ (void)setDebugEnabledForNewSessions:(_Bool)sessions;
+ (_Bool)isDebugEnabledForNewSessions;

/* instance methods */
- (id)initWithCache:(id)cache identifier:(id)identifier;
- (void)logError:(id)error;
- (void)logDebug:(id)debug;
- (_Bool)debugEnabled;

@end

#endif /* TFSModelCacheSession_h */
