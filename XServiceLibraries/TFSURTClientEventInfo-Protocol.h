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
