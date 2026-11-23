//
#ifndef TFSTwitterGeotag_h
#define TFSTwitterGeotag_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterLocation.h"
#include "TFSTwitterPlace.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFSTwitterGeotag : NSObject <NSCoding, TFSTwitterCore.TFSTwitterScribableItem> // (Swift)

@property (nonatomic, readonly) TFSTwitterLocation *location;
@property (nonatomic, readonly) TFSTwitterPlace *place;
@property (nonatomic, readonly) long long geotagType;
@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithLocation:(id)location place:(id)place geotagType:(long long)type;
- (id)initWithGeotagJSONDictionary:(id)jsondictionary place:(id)place;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterGeotag_h */
