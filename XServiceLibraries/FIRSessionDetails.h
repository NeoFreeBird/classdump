//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRSessionDetails_h
#define FIRSessionDetails_h
@import Foundation;

@class HasMalware, NSObject, NSString;

@interface FIRSessionDetails : NSObject // (Swift)

@property (nonatomic, copy) NSString *sessionId;

/* instance methods */
- (id)init;

@end

#endif /* FIRSessionDetails_h */
