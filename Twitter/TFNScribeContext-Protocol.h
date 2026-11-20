//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNScribeContext_Protocol_h
#define TFNScribeContext_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TFNScribeContext <NSObject, NSCopying>

@required

@property (nonatomic, readonly) NSString *page;
@property (nonatomic, readonly) NSString *section;
@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *element;
@property (nonatomic, readonly) NSDictionary *parameters;

@optional

@end

#endif /* TFNScribeContext_Protocol_h */
