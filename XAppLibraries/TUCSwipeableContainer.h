//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCSwipeableContainer_h
#define TUCSwipeableContainer_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCDisplayOptions.h"
#include "TUCMediaComponentModel.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface TUCSwipeableContainer : NSObject <TUCComponentContainer>

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSString *unifiedCardUnifiedID;
@property (readonly, nonatomic) NSArray *dpaProductMetadataObjects;
@property (readonly, nonatomic) NSNumber *trailingPadding;
@property (readonly, nonatomic) TUCDisplayOptions *displayOptions;
@property (readonly, nonatomic) _Bool hasCarousel;
@property (readonly, nonatomic) TUCMediaComponentModel *firstVideoComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainers:(id)containers unifiedCardUnifiedID:(id)id displayOptions:(id)options dpaProductMetadataObjects:(id)objects trailingPadding:(id)padding;
- (id)firstDestinationOfMultiDestinationCarouselAtIndex:(unsigned long long)index;
- (id)allComponents;
- (id)withPromotedContent:(id)content;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUCSwipeableContainer_h */
