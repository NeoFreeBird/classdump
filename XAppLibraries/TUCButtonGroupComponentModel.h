//
#ifndef TUCButtonGroupComponentModel_h
#define TUCButtonGroupComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUCDominantColorAdaptable-Protocol.h"

@class NSArray, NSObject, NSString, UIColor;

@interface TUCButtonGroupComponentModel : NSObject <TUCComponentModel, TUCDominantColorAdaptable>

@property (copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) _Bool shouldRedesignButton;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *dominantColor;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)withDominantColor:(id)color;
- (id)withButton:(id)button;
- (id)initWithButtons:(id)buttons dominantColor:(id)color shouldRedesignButton:(_Bool)button;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCButtonGroupComponentModel_h */
