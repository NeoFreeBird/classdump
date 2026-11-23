//
#ifndef TrafficRecommendation_Protocol_h
#define TrafficRecommendation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TrafficRecommendation <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *hostname;

/* required instance methods */
- (id)dictionaryValue;
- (id)initWithDictionary:(id)dictionary;

@optional

@end

#endif /* TrafficRecommendation_Protocol_h */
