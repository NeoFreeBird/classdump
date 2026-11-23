//
#ifndef TFNTwitterCompositionGeotagSession_h
#define TFNTwitterCompositionGeotagSession_h
@import Foundation;

#include "TFSTwitterGeotagSessionItem.h"

@class NSMutableSet, NSObject;

@interface TFNTwitterCompositionGeotagSession : NSObject

@property (retain, nonatomic) TFSTwitterGeotagSessionItem *selectedSessionItem;
@property (retain, nonatomic) NSMutableSet *removedSessionItems;
@property (nonatomic) _Bool didAutotagPlace;
@property (nonatomic) _Bool didInteractWithPlacePicker;
@property (nonatomic) _Bool didInteractWithPlaceSearch;
@property (readonly, nonatomic) _Bool hasGeoInteraction;

/* instance methods */
- (id)init;
- (void)setSelectedSessionItemWithPlace:(id)place index:(long long)index query:(id)query isAutotag:(_Bool)autotag;
- (id)mergeWithGeotagSession:(id)session;
- (void)removeSelectedSessionItem;
- (id)scribeParameters;
- (id)_modifiedScribeItemForSessionItem:(id)item;
- (id)_stringForCurrentTime;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFNTwitterCompositionGeotagSession_h */
