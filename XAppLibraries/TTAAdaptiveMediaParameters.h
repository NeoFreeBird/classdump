//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTAAdaptiveMediaParameters_h
#define TTAAdaptiveMediaParameters_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSObject;

@interface TTAAdaptiveMediaParameters : NSObject

@property (weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) double gutterWidth;
@property (readonly, nonatomic) long long avatarSize;
@property (readonly, nonatomic) long long userCellStyleInTweetDetails;

/* class methods */
+ (struct CGSize { double x0; double x1; })inlineActionMinimumTappingSize;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* TTAAdaptiveMediaParameters_h */
