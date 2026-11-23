//
#ifndef TNLContentEncoder_Protocol_h
#define TNLContentEncoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLContentEncoder <NSObject>

@required

/* required instance methods */
- (id)tnl_contentEncodingType;
- (id)tnl_encodeHTTPBody:(id)httpbody error:(out id *)error;

@optional

@end

#endif /* TNLContentEncoder_Protocol_h */
