//
#ifndef URTImpressionCacheRecordResult_h
#define URTImpressionCacheRecordResult_h
@import Foundation;

@class NSObject;

@interface URTImpressionCacheRecordResult : NSObject // (Swift)

@property (nonatomic, readonly) long long duplicateContentCount;
@property (nonatomic, readonly) _Bool isFirstEntryImpression;

/* instance methods */
- (id)init;

@end

#endif /* URTImpressionCacheRecordResult_h */
