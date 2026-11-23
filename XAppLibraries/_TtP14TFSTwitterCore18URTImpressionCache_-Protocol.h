//
#ifndef _TtP14TFSTwitterCore18URTImpressionCache__Protocol_h
#define _TtP14TFSTwitterCore18URTImpressionCache__Protocol_h
@import Foundation;

@protocol TFSTwitterCore.URTImpressionCache

@required

@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) _Bool isOptimizedImplementation;

/* required instance methods */
- (id)recordImpressionWithEntryID:(id)id contentID:(id)id;
- (_Bool)containsEntryID:(id)id;
- (_Bool)contains:(long long)contains prefixlessContentID:(id)id;
- (long long)countForContentID:(id)id;
- (id)seenContentIDsOf:(long long)of sinceLastInvocation:(_Bool)invocation minInsertionDate:(id)date maxCount:(unsigned long long)count;
- (_Bool)hasAnyImpressionOf:(long long)of sinceLastInvocation:(_Bool)invocation minInsertionDate:(id)date;
- (void)removeAllEntries;
- (void)waitForPendingRecordings;

@optional

@end

#endif /* _TtP14TFSTwitterCore18URTImpressionCache__Protocol_h */
