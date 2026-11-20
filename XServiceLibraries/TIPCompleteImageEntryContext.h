//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
