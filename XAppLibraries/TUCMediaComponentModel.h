//
#ifndef TUCMediaComponentModel_h
#define TUCMediaComponentModel_h
@import Foundation;

#include "TUCButtonData.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUCDominantColorSource-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString, TFSTwitterEntityMedia, UIColor, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TUCMediaComponentModel : NSObject <TUCComponentModel, TUCDominantColorSource>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TFSTwitterEntityMedia *mediaEntity;
@property (readonly, nonatomic) NSNumber *mediaRatio;
@property (readonly, nonatomic) NSNumber *thresholdMediaRatio;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) TUCButtonData *mediaButton;
@property (readonly, nonatomic) _Bool shouldRenderOverlay;
@property (readonly, nonatomic) NSDictionary *scribeItem;
@property (readonly, nonatomic) NSNumber *computedMediaRatio;
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
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (id)initWithMediaRatio:(id)ratio thresholdAspectRatio:(id)ratio mediaEntity:(id)entity destination:(id)destination mediaButton:(id)button promotedContent:(id)content sourceDominantColor:(id)color shouldRenderOverlay:(_Bool)overlay scribeItem:(id)item;
- (long long)mediaType;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCMediaComponentModel_h */
