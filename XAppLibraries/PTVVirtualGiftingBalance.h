//
#ifndef PTVVirtualGiftingBalance_h
#define PTVVirtualGiftingBalance_h
@import Foundation;

@class NSObject;

@interface PTVVirtualGiftingBalance : NSObject

@property (readonly, nonatomic) long long total_coins;
@property (readonly, nonatomic) long long total_stars;

/* instance methods */
- (id)initWithTotalCoins:(long long)coins totalStars:(long long)stars;

@end

#endif /* PTVVirtualGiftingBalance_h */
