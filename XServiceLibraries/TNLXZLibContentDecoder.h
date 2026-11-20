//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLXZLibContentDecoder_h
#define TNLXZLibContentDecoder_h
@import Foundation;

#include "TNLContentDecoder-Protocol.h"

@class NSObject, NSString;

@interface TNLXZLibContentDecoder : NSObject <TNLContentDecoder>

@property (readonly, nonatomic) unsigned int mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMode:(unsigned int)mode;
- (id)tnl_contentEncodingType;
- (id)tnl_initializeDecodingWithContentEncoding:(id)encoding client:(id)client error:(out id *)error;
- (_Bool)tnl_decode:(id)tnl_decode additionalData:(id)data error:(out id *)error;
- (_Bool)tnl_finalizeDecoding:(id)decoding error:(out id *)error;

@end

#endif /* TNLXZLibContentDecoder_h */
