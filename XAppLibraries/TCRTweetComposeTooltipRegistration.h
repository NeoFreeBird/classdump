//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRTweetComposeTooltipRegistration_h
#define TCRTweetComposeTooltipRegistration_h
@import Foundation;

@class NSObject, NSString, TFNTooltipTarget;

@interface TCRTweetComposeTooltipRegistration : NSObject

@property (readonly, copy, nonatomic) NSString *tooltipEventKey;
@property (readonly, nonatomic) TFNTooltipTarget *target;

/* instance methods */
- (id)initWithTooltipEventKey:(id)key target:(id)target;

@end

#endif /* TCRTweetComposeTooltipRegistration_h */
