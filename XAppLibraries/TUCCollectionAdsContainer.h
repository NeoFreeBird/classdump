//
#ifndef TUCCollectionAdsContainer_h
#define TUCCollectionAdsContainer_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCDisplayOptions.h"
#include "TUCMediaComponentModel.h"

@class NSArray, NSObject, NSString;

@interface TUCCollectionAdsContainer : NSObject <TUCComponentContainer>

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSString *unifiedCardUnifiedID;
@property (readonly, nonatomic) long long interactionType;
@property (readonly, nonatomic) TUCDisplayOptions *displayOptions;
@property (readonly, nonatomic) _Bool hasCarousel;
@property (readonly, nonatomic) TUCMediaComponentModel *firstVideoComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainers:(id)containers unifiedCardUnifiedID:(id)id interactionType:(long long)type;
- (id)init;
- (id)allComponents;
- (id)withPromotedContent:(id)content;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUCCollectionAdsContainer_h */
