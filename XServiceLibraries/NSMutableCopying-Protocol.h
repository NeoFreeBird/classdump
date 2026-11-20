//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSMutableCopying_Protocol_h
#define NSMutableCopying_Protocol_h
@import Foundation;

@protocol NSMutableCopying

@required

/* required instance methods */
- (id)mutableCopyWithZone:(struct _NSZone *)zone;

@optional

@end

#endif /* NSMutableCopying_Protocol_h */
