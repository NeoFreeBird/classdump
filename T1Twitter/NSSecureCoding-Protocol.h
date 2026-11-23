//
#ifndef NSSecureCoding_Protocol_h
#define NSSecureCoding_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"

@protocol NSSecureCoding <NSCoding>

@required

@property (class, nonatomic, readonly) _Bool supportsSecureCoding;

/* class methods */
+ (_Bool)supportsSecureCoding;

@optional

@end

#endif /* NSSecureCoding_Protocol_h */
