//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TwitterMediaPreviewInfo_h
#define T1TwitterMediaPreviewInfo_h
@import Foundation;

#include "TTACoreStatusViewModel-Protocol.h"

@class NSObject, TFSTwitterMediaInfo;

@interface T1TwitterMediaPreviewInfo : NSObject

@property (readonly, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> outerViewModel;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> containerViewModel;
@property (readonly, nonatomic) unsigned long long mediaIndex;
@property (readonly, nonatomic) _Bool isMixedMediaConsumptionEnabled;
@property (readonly, nonatomic) TFSTwitterMediaInfo *mediaInfo;

/* class methods */
+ (id)mediaPreviewInfoListWithViewModels:(id)models accountFeatureSwitches:(id)switches filteredMediaIndices:(id)indices;
+ (id)_t1_mediaPreviewInfosForViewModel:(id)model outerViewModel:(id)model isMixedMediaConsumptionEnabled:(_Bool)enabled filteredMediaIndices:(id)indices;
+ (id)_t1_ownedMediaPreviewInfoListWithViewModel:(id)model outerViewModel:(id)model isMixedMediaConsumptionEnabled:(_Bool)enabled;

/* instance methods */
- (id)initWithViewModel:(id)model outerViewModel:(id)model mediaIndex:(long long)index isMixedMediaConsumptionEnabled:(_Bool)enabled;
- (id)imageURLString;
- (struct CGSize { double x0; double x1; })imageDimensions;
- (id)entityURL;
- (id)altText;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1TwitterMediaPreviewInfo_h */
