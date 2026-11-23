//
#ifndef TFSScribeEvent_Protocol_h
#define TFSScribeEvent_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSObject-Protocol.h"

@class NSData, NSString;

@protocol TFSScribeEvent <NSObject>

@required

@property (nonatomic, readonly) NSString *group;
@property (nonatomic, readonly) NSData *content;
@property (nonatomic, readonly) id <NSCoding> metadata;

@optional

@end

#endif /* TFSScribeEvent_Protocol_h */
