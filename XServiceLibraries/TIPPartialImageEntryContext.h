//
#ifndef TIPPartialImageEntryContext_h
#define TIPPartialImageEntryContext_h
@import Foundation;

#include "TIPImageCacheEntryContext.h"

@class NSString;

@interface TIPPartialImageEntryContext : TIPImageCacheEntryContext

@property (nonatomic) unsigned long long expectedContentLength;
@property (copy, nonatomic) NSString *lastModified;

/* instance methods */
- (id)initWithCacheEntryContext:(id)context;

@end

#endif /* TIPPartialImageEntryContext_h */
