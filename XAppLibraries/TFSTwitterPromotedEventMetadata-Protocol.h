//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPromotedEventMetadata_Protocol_h
#define TFSTwitterPromotedEventMetadata_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterPromotedEventMetadata <NSObject>

@required

@property (nonatomic, readonly) NSString *impressionID;
@property (nonatomic, readonly) long long unifiedDisclosureType;

@optional

@end

#endif /* TFSTwitterPromotedEventMetadata_Protocol_h */
