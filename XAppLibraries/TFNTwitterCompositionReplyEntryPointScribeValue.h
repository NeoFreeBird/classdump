//
#ifndef TFNTwitterCompositionReplyEntryPointScribeValue_h
#define TFNTwitterCompositionReplyEntryPointScribeValue_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterCompositionReplyEntryPointScribeValue : NSObject <NSCoding>

@property (readonly, nonatomic) long long entryPoint;
@property (readonly, copy, nonatomic) NSString *page;
@property (readonly, copy, nonatomic) NSString *section;
@property (readonly, copy, nonatomic) NSString *component;
@property (readonly, copy, nonatomic) NSString *element;

/* instance methods */
- (id)init;
- (id)initWithEntryPoint:(long long)point;
- (id)initWithEntryPoint:(long long)point scribeContext:(id)context;
- (id)initWithEntryPoint:(long long)point page:(id)page section:(id)section component:(id)component;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFNTwitterCompositionReplyEntryPointScribeValue_h */
