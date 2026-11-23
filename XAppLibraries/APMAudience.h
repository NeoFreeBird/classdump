//
#ifndef APMAudience_h
#define APMAudience_h
@import Foundation;

#include "APMDatabase.h"

@class NSObject;

@interface APMAudience : NSObject {
    /* instance variables */
    APMDatabase *_database;
}

/* class methods */
+ (_Bool)isFilterResult:(id)result trueForFilterID:(int)id;
+ (id)updatedFilterResultWithFilterID:(int)id audienceID:(int)id currentFilterResult:(id)result newEvaluationResult:(id)result audienceTimestampsCache:(id)cache;

/* instance methods */
- (id)initWithDatabase:(id)database;
- (_Bool)evaluateFiltersForEvent:(id)event eventAggregates:(id)aggregates audienceTimestampsCache:(id)cache;
- (_Bool)evaluateFiltersForEventName:(id)name eventParameters:(id)parameters eventAggregates:(id)aggregates eventTimestamp:(double)timestamp audienceTimestampsCache:(id)cache;
- (_Bool)evaluateFiltersForUserProperty:(id)property audienceTimestampsCache:(id)cache evaluationTimestamp:(double)timestamp;
- (_Bool)evaluateFiltersForNanoUserProperty:(id)property audienceTimestampsCache:(id)cache evaluationTime:(id)time;
- (_Bool)updateAudiences:(id)audiences;
- (_Bool)maybeDeleteStaleFilterResults:(id)results;
- (_Bool)resultsForBundling:(id *)bundling;
- (_Bool)clearEvaluationResultsForSessionScopedFilters;

@end

#endif /* APMAudience_h */
