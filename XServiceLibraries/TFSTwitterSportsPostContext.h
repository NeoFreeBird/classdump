//
#ifndef TFSTwitterSportsPostContext_h
#define TFSTwitterSportsPostContext_h
@import Foundation;

#include "TFSTwitterSportsPostContextCompetitor.h"

@class NSArray, NSDate, NSObject, NSString;

@interface TFSTwitterSportsPostContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 receivedAt;
}

@property (nonatomic, readonly) NSString *league;
@property (nonatomic, readonly) NSString *gameID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *statusText;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDate *scheduledAt;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSArray *competitors;
@property (nonatomic, readonly) _Bool isFootball;
@property (nonatomic, readonly) TFSTwitterSportsPostContextCompetitor *away;
@property (nonatomic, readonly) TFSTwitterSportsPostContextCompetitor *home;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isStaleAt:(id)at;
- (id)accessibilitySummaryWithFinalLabel:(id)label todayLabel:(id)label highlightsLabel:(id)label isStale:(_Bool)stale;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterSportsPostContext_h */
