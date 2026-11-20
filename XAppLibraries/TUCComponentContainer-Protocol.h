//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentContainer_Protocol_h
#define TUCComponentContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUCDisplayOptions.h"
#include "TUCMediaComponentModel.h"

@protocol TUCComponentContainer <NSObject>

@required

@property (nonatomic, readonly) TUCDisplayOptions *displayOptions;
@property (nonatomic, readonly) _Bool hasCarousel;
@property (nonatomic, readonly) TUCMediaComponentModel *firstVideoComponent;

/* required instance methods */
- (id)allComponents;
- (id)withPromotedContent:(id)content;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;
- (id)withRemovedComponentsOfType:(unsigned long long)type;

@optional

@end

#endif /* TUCComponentContainer_Protocol_h */
