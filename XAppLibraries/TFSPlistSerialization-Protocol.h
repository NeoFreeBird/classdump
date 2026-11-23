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
