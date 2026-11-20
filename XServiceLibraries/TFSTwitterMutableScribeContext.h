//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterMutableScribeContext_h
#define TFSTwitterMutableScribeContext_h
@import Foundation;

#include "TFSTwitterScribeContext.h"

@class NSArray, NSDictionary, NSString;

@interface TFSTwitterMutableScribeContext : TFSTwitterScribeContext

@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSString *component;
@property (copy, nonatomic) NSString *element;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSArray *associations;
@property (copy, nonatomic) TFSTwitterScribeContext *sourceContext;

/* class methods */
+ (id)scribeContextWithScribeContext:(id)context;

/* instance methods */
- (void)addParameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterMutableScribeContext_h */
