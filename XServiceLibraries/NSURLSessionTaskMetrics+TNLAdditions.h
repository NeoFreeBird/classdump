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
