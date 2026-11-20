//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeImpression_Protocol_h
#define TFSScribeImpression_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSData, NSDate, NSString;

@protocol TFSScribeImpression <NSObject>

@required

@property (readonly, nonatomic) NSString *group;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *query;

@optional

@end

#endif /* TFSScribeImpression_Protocol_h */
