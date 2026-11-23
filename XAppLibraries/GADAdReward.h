//
#ifndef GADAdReward_h
#define GADAdReward_h
@import Foundation;

@class NSDecimalNumber, NSObject, NSString;

@interface GADAdReward : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSDecimalNumber *amount;

/* instance methods */
- (id)init;
- (id)initWithRewardDictionary:(id)dictionary;
- (id)initWithRewardType:(id)type rewardAmount:(id)amount;

@end

#endif /* GADAdReward_h */
