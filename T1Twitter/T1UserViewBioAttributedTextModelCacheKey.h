//
#ifndef T1UserViewBioAttributedTextModelCacheKey_h
#define T1UserViewBioAttributedTextModelCacheKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, TFNLayoutMetrics;

@interface T1UserViewBioAttributedTextModelCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bioString;
@property (copy, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (nonatomic) unsigned long long bioMaxLines;

/* instance methods */
- (id)initWithBioString:(id)string layoutMetrics:(id)metrics bioMaxLines:(unsigned long long)lines;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* T1UserViewBioAttributedTextModelCacheKey_h */
