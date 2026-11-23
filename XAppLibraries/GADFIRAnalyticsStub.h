//
#ifndef GADFIRAnalyticsStub_h
#define GADFIRAnalyticsStub_h
@import Foundation;

@class NSObject, NSString;

@interface GADFIRAnalyticsStub : NSObject

@property (readonly, copy, nonatomic) NSString *googleAppID;
@property (readonly, copy, nonatomic) NSString *analyticsAppID;
@property (readonly, copy, nonatomic) NSString *appInstanceID;
@property (readonly, copy, nonatomic) NSString *adEventID;
@property (readonly, copy, nonatomic) NSString *origin;

/* instance methods */
- (void)logInternalEventWithOrigin:(id)origin name:(id)name parameters:(id)parameters;
- (void)getScreenName:(id *)name screenClass:(id *)_class;
- (void)setScreenName:(id)name screenClass:(id)_class;
- (void)beginAdUnitExposure:(id)exposure;
- (void)endAdUnitExposure:(id)exposure;

@end

#endif /* GADFIRAnalyticsStub_h */
