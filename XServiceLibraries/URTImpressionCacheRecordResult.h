//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
