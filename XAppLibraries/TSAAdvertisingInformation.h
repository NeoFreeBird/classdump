//
#ifndef TSAAdvertisingInformation_h
#define TSAAdvertisingInformation_h
@import Foundation;

@class NSObject, NSString;

@interface TSAAdvertisingInformation : NSObject

@property (readonly, nonatomic) NSString *IDFAString;
@property (readonly, nonatomic) _Bool advertisingTrackingEnabled;

/* instance methods */
- (id)initWithIDFAString:(id)idfastring advertisingTrackingEnabled:(_Bool)enabled;
- (id)logCardAppParametersForAppId:(id)id category:(id)category parameters:(id)parameters;
- (id)init;
- (_Bool)isAdvertisingTrackingEnabled;

@end

#endif /* TSAAdvertisingInformation_h */
