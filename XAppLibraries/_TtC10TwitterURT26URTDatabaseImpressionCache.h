//
#ifndef _TtC10TwitterURT26URTDatabaseImpressionCache_h
#define _TtC10TwitterURT26URTDatabaseImpressionCache_h
@import Foundation;

#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class DispatchQueue, TwitterURT.URTImpressionDatabase, _$s14TFSTwitterCore19NonFatalErrorLoggerMp, _TtCs12_SwiftObject;

@interface TwitterURT.URTDatabaseImpressionCache : Swift._SwiftObject <TFSTwitterCore.URTImpressionCache> { // (Swift)
    /* instance variables */
    protocol descriptor for TFSTwitterCore.NonFatalErrorLogger nonFatalLogger;
    TwitterURT.URTImpressionDatabase impressionDatabase;
    DispatchQueue writeQueue;
}

@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) _Bool isOptimizedImplementation;

/* instance methods */
- (id)recordImpressionWithEntryID:(id)id contentID:(id)id;
- (_Bool)containsEntryID:(id)id;
- (_Bool)contains:(long long)contains prefixlessContentID:(id)id;
- (long long)countForContentID:(id)id;
- (id)seenContentIDsOf:(long long)of sinceLastInvocation:(_Bool)invocation minInsertionDate:(id)date maxCount:(unsigned long long)count;
- (_Bool)hasAnyImpressionOf:(long long)of sinceLastInvocation:(_Bool)invocation minInsertionDate:(id)date;
- (void)removeAllEntries;
- (void)waitForPendingRecordings;

@end

#endif /* _TtC10TwitterURT26URTDatabaseImpressionCache_h */
