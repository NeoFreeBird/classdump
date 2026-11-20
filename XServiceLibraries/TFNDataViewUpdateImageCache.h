//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewUpdateImageCache_h
#define TFNDataViewUpdateImageCache_h
@import Foundation;

#include "TFNDataView-Protocol.h"

@class NSMutableDictionary, NSObject, UIView;

@interface TFNDataViewUpdateImageCache : NSObject

@property (readonly, weak, nonatomic) UIView<TFNDataView> *dataView;
@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) long long inProgressUpdateCount;

/* instance methods */
- (id)initWithDataView:(id)view;
- (void)dataViewWillUpdate;
- (void)_tfn_cacheImagesFromView:(id)view;
- (void)_tfn_cacheImageForView:(id)view;
- (void)_tfn_restoreImagesFromView:(id)view;
- (void)_tfn_restoreImageInView:(id)view;

@end

#endif /* TFNDataViewUpdateImageCache_h */
