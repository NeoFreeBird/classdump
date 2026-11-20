//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNetworkToken_Protocol_h
#define LHLSNetworkToken_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@protocol LHLSNetworkToken <NSObject, NSCopying>

@required

@property (readonly, nonatomic) int value;

@optional

@end

#endif /* LHLSNetworkToken_Protocol_h */
