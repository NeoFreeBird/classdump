//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CNKeyDescriptor_Protocol_h
#define CNKeyDescriptor_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@protocol CNKeyDescriptor <NSObject, NSSecureCoding, NSCopying>

@required

@optional

@end

#endif /* CNKeyDescriptor_Protocol_h */
