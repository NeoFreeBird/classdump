//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
