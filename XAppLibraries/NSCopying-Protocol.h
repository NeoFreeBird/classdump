//
#ifndef NSCopying_Protocol_h
#define NSCopying_Protocol_h
@import Foundation;

@protocol NSCopying

@required

/* required instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@optional

@end

#endif /* NSCopying_Protocol_h */
