//
#ifndef TNUHTTPContentDecoder_h
#define TNUHTTPContentDecoder_h
@import Foundation;

#include "NOZDecoder-Protocol.h"
#include "TNLContentDecoder-Protocol.h"

@class NSObject, NSString;

@interface TNUHTTPContentDecoder : NSObject <TNLContentDecoder> {
    /* instance variables */
    id <NOZDecoder> _decoder;
    NSString *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNOZDecoder:(id)nozdecoder contentEncodingType:(id)type;
- (id)tnl_contentEncodingType;
- (id)tnl_initializeDecodingWithContentEncoding:(id)encoding client:(id)client error:(out id *)error;
- (_Bool)tnl_decode:(id)tnl_decode additionalData:(id)data error:(out id *)error;
- (_Bool)tnl_finalizeDecoding:(id)decoding error:(out id *)error;

@end

#endif /* TNUHTTPContentDecoder_h */
