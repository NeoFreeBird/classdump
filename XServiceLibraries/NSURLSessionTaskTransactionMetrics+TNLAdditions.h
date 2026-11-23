//
#ifndef NSURLSessionTaskTransactionMetrics_TNLAdditions_h
#define NSURLSessionTaskTransactionMetrics_TNLAdditions_h
@import Foundation;

@interface NSURLSessionTaskTransactionMetrics (TNLAdditions)

/* instance methods */
- (id)tnl_dictionaryValue;
- (id)tnl_dictionaryDescription;
- (id)tnl_medadata;
- (id)tnl_resourceFetchTypeDebugString;
- (id)tnl_timingDescription;
- (id)tnl_earliestDate;
- (id)tnl_latestDate;
- (double)tnl_knownDuration;
- (id)tnl_transportConnectionStartDate;
- (id)tnl_transportConnectionEndDate;
- (id)tnl_domainLookupDuration;
- (id)tnl_connectDuration;
- (id)tnl_transportConnectionDuration;
- (id)tnl_secureConnectionDuration;
- (id)tnl_requestSendDuration;
- (id)tnl_serverTimeDuration;
- (id)tnl_responseReceiveDuration;
- (id)tnl_totalDuration;
- (id)tnl_secureConnectionDurationExt;
- (id)tnl_ttfbDuration;
- (id)tnl_ttlbDuration;

@end

#endif /* NSURLSessionTaskTransactionMetrics_TNLAdditions_h */
