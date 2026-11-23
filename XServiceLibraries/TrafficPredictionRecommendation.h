//
#ifndef TrafficPredictionRecommendation_h
#define TrafficPredictionRecommendation_h
@import Foundation;

#include "TrafficRecommendation-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString;

@interface TrafficPredictionRecommendation : NSObject <TrafficRecommendation>

@property (readonly, copy, nonatomic) NSString *controlMeasurementUrl;
@property (readonly, copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) _Bool rewriteWithWinner;
@property (readonly, copy, nonatomic) NSDictionary *context;
@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)modelWithHostName:(id)name responseDictionary:(id)dictionary;

/* instance methods */
- (id)initWithHostName:(id)name controlMeasurementUrl:(id)url candidates:(id)candidates rewriteWithWinner:(_Bool)winner context:(id)context;
- (id)candidateHostToContextDic;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* TrafficPredictionRecommendation_h */
