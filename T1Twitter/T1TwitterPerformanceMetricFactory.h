//
#ifndef T1TwitterPerformanceMetricFactory_h
#define T1TwitterPerformanceMetricFactory_h
@import Foundation;

@class NSObject;

@interface T1TwitterPerformanceMetricFactory : NSObject

/* class methods */
+ (id)averageScrollPerformanceMetricsWithAccount:(id)account delegate:(id)delegate componentIdentifier:(id)identifier;
+ (id)componentIdentifierForActiveAverageScrollPerformanceMetrics;
+ (id)averageCellPreparationTimeMetricForCellWithIdentifier:(id)identifier account:(id)account;
+ (id)averageThreadCountMetricForAccount:(id)account;
+ (id)_t1_performanceMetricDirectory;
+ (void)_t1_accountsDidChange:(id)change;
+ (id)_t1_metricsCacheForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* T1TwitterPerformanceMetricFactory_h */
