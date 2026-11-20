//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
