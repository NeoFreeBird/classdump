//
#ifndef TTMRecentPhotoAssetLocalIdentifiersStore_h
#define TTMRecentPhotoAssetLocalIdentifiersStore_h
@import Foundation;

@class NSObject;

@interface TTMRecentPhotoAssetLocalIdentifiersStore : NSObject

@property (readonly, nonatomic) double duration;

/* class methods */
+ (id)private_selectLocalIdentifiersFrom:(id)from since:(id)since;
+ (void)private_updateLocalIdentifiersWithTimestamps:(id)timestamps;
+ (id)private_fetchLocalIdentifiersWithTimestamps;

/* instance methods */
- (id)initWithDuration:(double)duration;
- (void)addPhotoAssetLocalIdentifier:(id)identifier;
- (id)photoAssetLocalIdentifiersSince:(id)since;

@end

#endif /* TTMRecentPhotoAssetLocalIdentifiersStore_h */
