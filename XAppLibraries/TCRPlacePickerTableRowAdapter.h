//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRPlacePickerTableRowAdapter_h
#define TCRPlacePickerTableRowAdapter_h
@import Foundation;

#include "TFSTwitterGeoDataProvider-Protocol.h"

@class MKDistanceFormatter, TFNItemsTableRowAdapter;

@interface TCRPlacePickerTableRowAdapter : TFNItemsTableRowAdapter

@property (retain, nonatomic) MKDistanceFormatter *distanceFormatter;
@property (retain, nonatomic) id <TFSTwitterGeoDataProvider> geoDataProvider;
@property (nonatomic) _Bool disableCheckmarks;

/* instance methods */
- (id)initWithGeoDataProvider:(id)provider;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TCRPlacePickerTableRowAdapter_h */
