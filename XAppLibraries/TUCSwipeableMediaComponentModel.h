//
#ifndef TUCSwipeableMediaComponentModel_h
#define TUCSwipeableMediaComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUCDominantColorSource-Protocol.h"

@class NSArray, NSObject, NSString, UIColor;

@interface TUCSwipeableMediaComponentModel : NSObject <TUCComponentModel, TUCDominantColorSource>

@property (copy, nonatomic) NSArray *mediaArray;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) _Bool containsVideo;
@property (readonly, nonatomic) _Bool shouldAutoAdvance;
@property (readonly, nonatomic) _Bool shouldRoundBottomCorners;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSString *unifiedCardUnifiedID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *sourceDominantColor;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)initWithMediaArray:(id)array shouldAutoAdvance:(_Bool)advance shouldRoundBottomCorners:(_Bool)corners unifiedCardUnifiedID:(id)id sourceDominantColor:(id)color;
- (id)withPromotedContent:(id)content;
- (_Bool)shouldRenderFullBleed;
- (unsigned long long)destinationType;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCSwipeableMediaComponentModel_h */
