//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
