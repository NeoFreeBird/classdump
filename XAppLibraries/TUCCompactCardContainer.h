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
