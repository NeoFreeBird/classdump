//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCCompactCardContainer_h
#define TUCCompactCardContainer_h
@import Foundation;

#include "TUCDefaultContainer.h"

@class NSString;

@interface TUCCompactCardContainer : TUCDefaultContainer

@property (readonly, nonatomic) NSString *unifiedCardUnifiedID;

/* instance methods */
- (id)initWithUnifiedCardUnifiedID:(id)id components:(id)components displayOptions:(id)options;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;

@end

#endif /* TUCCompactCardContainer_h */
