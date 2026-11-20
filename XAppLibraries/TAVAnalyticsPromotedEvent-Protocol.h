//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsPromotedEvent_Protocol_h
#define TAVAnalyticsPromotedEvent_Protocol_h
@import Foundation;

@protocol TAVAnalyticsPromotedEvent

@required

@property (class, readonly, copy, nonatomic) NSString *promotedEventNameForContent;
@property (class, readonly, copy, nonatomic) NSString *promotedEventNameForAd;

/* class methods */
+ (id)promotedEventNameForContent;
+ (id)promotedEventNameForAd;

@optional

@end

#endif /* TAVAnalyticsPromotedEvent_Protocol_h */
