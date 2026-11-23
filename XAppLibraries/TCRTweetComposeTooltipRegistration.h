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
