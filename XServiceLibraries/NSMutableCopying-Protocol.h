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
