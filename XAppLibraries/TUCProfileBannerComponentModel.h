//
#ifndef TUCProfileBannerComponentModel_h
#define TUCProfileBannerComponentModel_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDestinationModel.h"

@class NSArray, NSObject, NSString, NSURL, UIColor;

@interface TUCProfileBannerComponentModel : NSObject <TUCComponentModel>

@property (readonly, nonatomic) NSURL *bannerURL;
@property (readonly, nonatomic) long long aspectRatioWidth;
@property (readonly, nonatomic) long long aspectRatioHeight;
@property (readonly, nonatomic) UIColor *backgroundColor;
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
- (id)initWithDestination:(id)destination bannerURL:(id)url aspectRatioWidth:(long long)width aspectRatioHeight:(long long)height backgroundColor:(id)color;
- (id)withPromotedContent:(id)content;
- (id)withDestinationTransform:(id /* block */)transform;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUCProfileBannerComponentModel_h */
