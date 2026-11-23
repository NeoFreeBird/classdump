//
#ifndef GDTCOREventDataObject_Protocol_h
#define GDTCOREventDataObject_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GDTCOREventDataObject <NSObject>

@required

/* required instance methods */
- (id)transportBytes;

@optional

@end

#endif /* GDTCOREventDataObject_Protocol_h */
