//
#ifndef TNLContentDecoder_Protocol_h
#define TNLContentDecoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLContentDecoder <NSObject>

@required

/* required instance methods */
- (id)tnl_contentEncodingType;
- (id)tnl_initializeDecodingWithContentEncoding:(id)encoding client:(id)client error:(out id *)error;
- (_Bool)tnl_decode:(id)tnl_decode additionalData:(id)data error:(out id *)error;
- (_Bool)tnl_finalizeDecoding:(id)decoding error:(out id *)error;

@optional

@end

#endif /* TNLContentDecoder_Protocol_h */
