//
#ifndef PTVVirtualUserEarnings_h
#define PTVVirtualUserEarnings_h
@import Foundation;

@class NSDate, NSObject;

@interface PTVVirtualUserEarnings : NSObject

@property (readonly, nonatomic) long long all_time_stars;
@property (readonly, nonatomic) long long all_time_cashed_out_stars;
@property (readonly, nonatomic) NSDate *last_all_time_update;

/* instance methods */
- (id)initWithAllTimeStars:(long long)stars allTimeCashedOutStars:(long long)stars lastAllTimeUpdate:(id)update;

@end

#endif /* PTVVirtualUserEarnings_h */
