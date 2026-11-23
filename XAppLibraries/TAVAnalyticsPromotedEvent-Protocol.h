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
