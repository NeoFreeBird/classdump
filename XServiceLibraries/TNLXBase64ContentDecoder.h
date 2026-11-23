//
#ifndef TNLXBase64ContentDecoder_h
#define TNLXBase64ContentDecoder_h
@import Foundation;

#include "TNLContentDecoder-Protocol.h"

@class NSObject, NSString;

@interface TNLXBase64ContentDecoder : NSObject <TNLContentDecoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tnl_contentEncodingType;
- (id)tnl_initializeDecodingWithContentEncoding:(id)encoding client:(id)client error:(out id *)error;
- (_Bool)tnl_decode:(id)tnl_decode additionalData:(id)data error:(out id *)error;
- (_Bool)tnl_finalizeDecoding:(id)decoding error:(out id *)error;

@end

#endif /* TNLXBase64ContentDecoder_h */
