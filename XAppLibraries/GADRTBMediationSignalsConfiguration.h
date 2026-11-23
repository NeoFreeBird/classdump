//
#ifndef GADRTBMediationSignalsConfiguration_h
#define GADRTBMediationSignalsConfiguration_h
@import Foundation;

@class NSArray, NSObject;

@interface GADRTBMediationSignalsConfiguration : NSObject

@property (readonly, nonatomic) NSArray *credentials;

/* instance methods */
- (id)initWithCredentials:(id)credentials;

@end

#endif /* GADRTBMediationSignalsConfiguration_h */
