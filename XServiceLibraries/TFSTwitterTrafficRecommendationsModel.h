//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTrafficRecommendationsModel_h
#define TFSTwitterTrafficRecommendationsModel_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSDate, NSObject, NSString;

@interface TFSTwitterTrafficRecommendationsModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *configurationKey;
@property (copy, nonatomic) NSString *configurationValue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDate *pollAfterDate;
@property (readonly, copy, nonatomic) NSArray *trafficRecommendations;

/* class methods */
+ (id)modelWithResponseData:(id)data;
+ (id)modelWithResponseDictionary:(id)dictionary;

/* instance methods */
- (id)initWithExpirationDate:(id)date pollAfterDate:(id)date trafficRecommendations:(id)recommendations;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* TFSTwitterTrafficRecommendationsModel_h */
