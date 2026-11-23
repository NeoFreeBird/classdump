//
#ifndef TNLURLEncodableObject_Protocol_h
#define TNLURLEncodableObject_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLURLEncodableObject <NSObject>

@required

/* required instance methods */
- (id)tnl_URLEncodableStringValue;

@optional

@end

#endif /* TNLURLEncodableObject_Protocol_h */
