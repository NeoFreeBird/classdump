//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
