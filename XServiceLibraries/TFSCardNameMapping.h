//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCardNameMapping_h
#define TFSCardNameMapping_h
@import Foundation;

@class NSObject;

@interface TFSCardNameMapping : NSObject // (Swift)

/* class methods */
+ (id)forCase:(long long)_case;
+ (id)forCardNameString:(id)string;

/* instance methods */
- (id)init;

@end

#endif /* TFSCardNameMapping_h */
