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
