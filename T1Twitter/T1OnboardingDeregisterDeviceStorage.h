//
#ifndef T1OnboardingDeregisterDeviceStorage_h
#define T1OnboardingDeregisterDeviceStorage_h
@import Foundation;

@class NSObject, NSString;

@interface T1OnboardingDeregisterDeviceStorage : NSObject // (Swift)

@property (nonatomic, copy) NSString *deviceRegistrationToken;

/* class methods */
+ (id)storageForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* T1OnboardingDeregisterDeviceStorage_h */
