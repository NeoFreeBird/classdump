//
#ifndef TNLXBase64ContentEncoder_h
#define TNLXBase64ContentEncoder_h
@import Foundation;

#include "TNLContentEncoder-Protocol.h"

@class NSObject, NSString;

@interface TNLXBase64ContentEncoder : NSObject <TNLContentEncoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tnl_contentEncodingType;
- (id)tnl_encodeHTTPBody:(id)httpbody error:(out id *)error;

@end

#endif /* TNLXBase64ContentEncoder_h */
