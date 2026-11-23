//
#ifndef TFSTwitterGeotagSessionItem_h
#define TFSTwitterGeotagSessionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, TFSTwitterPlace;

@interface TFSTwitterGeotagSessionItem : NSObject <TFSTwitterCore.TFSTwitterScribableItem, NSCopying>

@property (retain, nonatomic) TFSTwitterPlace *place;
@property (nonatomic) long long rank;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) _Bool isAutotag;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *timestamp;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterGeotagSessionItem_h */
