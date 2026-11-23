//
#ifndef TIPCompleteImageEntryContext_h
#define TIPCompleteImageEntryContext_h
@import Foundation;

#include "TIPImageCacheEntryContext.h"

@class NSString;

@interface TIPCompleteImageEntryContext : TIPImageCacheEntryContext

@property (copy, nonatomic) NSString *imageType;

/* instance methods */
- (id)initWithCacheEntryContext:(id)context;

@end

#endif /* TIPCompleteImageEntryContext_h */
