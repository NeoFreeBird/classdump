//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
