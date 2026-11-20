//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSShareURLBuilder_h
#define TSShareURLBuilder_h
@import Foundation;

@class NSObject;

@interface TSShareURLBuilder : NSObject // (Swift)

/* class methods */
+ (id)URLString:(id)urlstring byAppendingSParam:(unsigned long long)sparam;
+ (id)URLString:(id)urlstring byAppendingSessionToken:(id)token;

/* instance methods */
- (id)init;

@end

#endif /* TSShareURLBuilder_h */
