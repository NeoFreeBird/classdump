//
#ifndef TTMPersistentStringConvertible_Protocol_h
#define TTMPersistentStringConvertible_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TTMPersistentStringConvertible <NSObject>

@required

@property (nonatomic, readonly) NSString *persistentString;

@optional

@end

#endif /* TTMPersistentStringConvertible_Protocol_h */
