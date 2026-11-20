//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSDataCollectionToken_h
#define FIRCLSDataCollectionToken_h
@import Foundation;

@class NSObject;

@interface FIRCLSDataCollectionToken : NSObject

/* class methods */
+ (id)validToken;

/* instance methods */
- (_Bool)isValid;

@end

#endif /* FIRCLSDataCollectionToken_h */
