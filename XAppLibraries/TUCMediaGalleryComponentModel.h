//
#ifndef TUCMediaGalleryComponentModel_h
#define TUCMediaGalleryComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSObject, NSString;

@interface TUCMediaGalleryComponentModel : NSObject <TUCComponentModel>

@property (readonly, nonatomic) NSArray *destinations;
@property (readonly, nonatomic) NSArray *galleryMedia;
@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TUCDestinationModel *destination;
@property (readonly, nonatomic) NSArray *axDestinations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)componentWithJSON:(id)json componentCreationContext:(id)context;

/* instance methods */
- (id)initWithDestinations:(id)destinations galleryMedia:(id)media spacing:(double)spacing;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCMediaGalleryComponentModel_h */
