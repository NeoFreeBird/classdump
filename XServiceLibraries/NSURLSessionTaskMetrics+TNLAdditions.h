//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLSessionTaskMetrics_TNLAdditions_h
#define NSURLSessionTaskMetrics_TNLAdditions_h
@import Foundation;

@interface NSURLSessionTaskMetrics (TNLAdditions)

/* instance methods */
- (id)tnl_detailedDescription;
- (id)tnl_dictionaryValue;
- (id)tnl_approximateAttemptMetrics;

@end

#endif /* NSURLSessionTaskMetrics_TNLAdditions_h */
