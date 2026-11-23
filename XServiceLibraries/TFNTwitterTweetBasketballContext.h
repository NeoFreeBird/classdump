//
#ifndef TFNTwitterTweetBasketballContext_h
#define TFNTwitterTweetBasketballContext_h
@import Foundation;

#include "TFSURTUrl.h"

@class NSNumber, NSObject, NSString;

@interface TFNTwitterTweetBasketballContext : NSObject // (Swift)

@property (nonatomic, readonly) NSString *awayTeamName;
@property (nonatomic, readonly) NSNumber *awayTeamScore;
@property (nonatomic, readonly) NSString *clock;
@property (nonatomic, readonly) NSString *homeTeamName;
@property (nonatomic, readonly) NSNumber *homeTeamScore;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) TFSURTUrl *url;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithAwayTeamName:(id)name awayTeamScore:(id)score clock:(id)clock homeTeamName:(id)name homeTeamScore:(id)score status:(id)status url:(id)url;
- (id)init;

@end

#endif /* TFNTwitterTweetBasketballContext_h */
