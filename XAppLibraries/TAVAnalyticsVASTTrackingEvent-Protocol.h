//
#ifndef TAVAnalyticsVASTTrackingEvent_Protocol_h
#define TAVAnalyticsVASTTrackingEvent_Protocol_h
@import Foundation;

@class NSString;

@protocol TAVAnalyticsVASTTrackingEvent

@required

@property (readonly, copy, nonatomic) NSString *VASTTrackingMetric;

@optional

@end

#endif /* TAVAnalyticsVASTTrackingEvent_Protocol_h */
