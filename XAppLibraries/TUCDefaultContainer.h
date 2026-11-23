//
#ifndef TUCDefaultContainer_h
#define TUCDefaultContainer_h
@import Foundation;

#include "TUCComponentContainer-Protocol.h"
#include "TUCDisplayOptions.h"
#include "TUCMediaComponentModel.h"

@class NSArray, NSObject, NSString;

@interface TUCDefaultContainer : NSObject <TUCComponentContainer>

@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) TUCDisplayOptions *displayOptions;
@property (readonly, nonatomic) _Bool hasCarousel;
@property (readonly, nonatomic) TUCMediaComponentModel *firstVideoComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_tuc_applyDominantColorToComponents:(id)components;

/* instance methods */
- (id)initWithComponents:(id)components displayOptions:(id)options;
- (id)modifyComponents;
- (id)firstAppStoreComponent;
- (id)firstButtonGroupComponent;
- (id)findButtonToMove:(id)move destination:(id)destination;
- (id)allComponents;
- (id)withPromotedContent:(id)content;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUCDefaultContainer_h */
