//
#ifndef TFNScribeContext_Protocol_h
#define TFNScribeContext_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TFNScribeContext <NSObject, NSCopying>

@required

@property (readonly, copy, nonatomic) NSString *page;
@property (readonly, copy, nonatomic) NSString *section;
@property (readonly, copy, nonatomic) NSString *component;
@property (readonly, copy, nonatomic) NSString *element;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

@optional

@end

#endif /* TFNScribeContext_Protocol_h */
