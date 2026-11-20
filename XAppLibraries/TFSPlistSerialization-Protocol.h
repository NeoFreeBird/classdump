//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSPlistSerialization_Protocol_h
#define TFSPlistSerialization_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSPlistSerialization <NSObject>

@required

/* required instance methods */
- (id)initWithPlistDictionary:(id)dictionary;
- (id)plistDictionaryValue;

@optional

@end

#endif /* TFSPlistSerialization_Protocol_h */
