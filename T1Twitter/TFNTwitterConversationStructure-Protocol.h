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
