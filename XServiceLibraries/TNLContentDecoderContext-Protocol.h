//
#ifndef TNLContentDecoderContext_Protocol_h
#define TNLContentDecoderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TNLContentDecoderClient-Protocol.h"

@protocol TNLContentDecoderContext <NSObject>

@required

@property (readonly, nonatomic) id <TNLContentDecoderClient> tnl_decoderClient;

@optional

@end

#endif /* TNLContentDecoderContext_Protocol_h */
