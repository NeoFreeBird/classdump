//
#ifndef TFNScribeContext_h
#define TFNScribeContext_h
@import Foundation;

#include "TFNScribeContext-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFNScribeContext : NSObject <TFNScribeContext>

@property (readonly, copy, nonatomic) NSString *page;
@property (readonly, copy, nonatomic) NSString *section;
@property (readonly, copy, nonatomic) NSString *component;
@property (readonly, copy, nonatomic) NSString *element;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)deviceSink;
+ (id)sinkForAccountID:(id)id;
+ (id)constants;
+ (id)scribeContextWithPage:(id)page section:(id)section component:(id)component;
+ (id)scribeContextWithPage:(id)page section:(id)section component:(id)component element:(id)element;
+ (id)scribeContextWithPage:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNScribeContext_h */
