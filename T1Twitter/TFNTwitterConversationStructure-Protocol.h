//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterConversationStructure_Protocol_h
#define TFNTwitterConversationStructure_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TFNTwitterConversationStructure <NSObject>

@required

@property (nonatomic, readonly) NSArray *ancestorStatusIDs;

@optional

@end

#endif /* TFNTwitterConversationStructure_Protocol_h */
