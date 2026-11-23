//
#ifndef TNLXZLibContentEncoder_h
#define TNLXZLibContentEncoder_h
@import Foundation;

#include "TNLContentEncoder-Protocol.h"

@class NSObject, NSString;

@interface TNLXZLibContentEncoder : NSObject <TNLContentEncoder>

@property (readonly, nonatomic) unsigned int mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMode:(unsigned int)mode;
- (id)tnl_contentEncodingType;
- (id)tnl_encodeHTTPBody:(id)httpbody error:(out id *)error;

@end

#endif /* TNLXZLibContentEncoder_h */
