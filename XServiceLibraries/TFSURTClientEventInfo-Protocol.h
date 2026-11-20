//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSURTClientEventInfo_Protocol_h
#define TFSURTClientEventInfo_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSURTClientEventInfo <NSObject>

@required

@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *element;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSString *entityToken;

@optional

@end

#endif /* TFSURTClientEventInfo_Protocol_h */
