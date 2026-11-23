//
#ifndef TTACoreStatusViewAggregateCounts_h
#define TTACoreStatusViewAggregateCounts_h
@import Foundation;

@class NSObject;

@interface TTACoreStatusViewAggregateCounts : NSObject

/* class methods */
+ (_Bool)showAggregatedCountsForViewModel:(id)model options:(unsigned long long)options;
+ (long long)combinedRetweetAndQuoteCountForViewModel:(id)model options:(unsigned long long)options;

@end

#endif /* TTACoreStatusViewAggregateCounts_h */
