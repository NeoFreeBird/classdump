//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSCopying_Protocol_h
#define NSCopying_Protocol_h
@import Foundation;

@protocol NSCopying

@required

/* required instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;

@optional

@end

#endif /* NSCopying_Protocol_h */
