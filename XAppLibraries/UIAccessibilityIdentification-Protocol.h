//
#ifndef UIAccessibilityIdentification_Protocol_h
#define UIAccessibilityIdentification_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol UIAccessibilityIdentification <NSObject>

@required

@property (copy, nonatomic) NSString *accessibilityIdentifier;

@optional

@end

#endif /* UIAccessibilityIdentification_Protocol_h */
