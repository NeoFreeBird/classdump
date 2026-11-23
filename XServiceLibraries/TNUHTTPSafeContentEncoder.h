//
#ifndef TNUHTTPSafeContentEncoder_h
#define TNUHTTPSafeContentEncoder_h
@import Foundation;

#include "TNLContentEncoder-Protocol.h"

@class NSObject, NSString;

@interface TNUHTTPSafeContentEncoder : NSObject <TNLContentEncoder> {
    /* instance variables */
    id <TNLContentEncoder> _underlyingEncoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUnderlyingEncoder:(id)encoder;
- (id)tnl_contentEncodingType;
- (id)tnl_encodeHTTPBody:(id)httpbody error:(out id *)error;

@end

#endif /* TNUHTTPSafeContentEncoder_h */
