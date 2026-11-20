//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterPOISuggester_h
#define TFNTwitterPOISuggester_h
@import Foundation;

#include "TFNTwitterComposePlaceStore.h"

@class NSObject;
@protocol TFNTwitterPOISuggesterDelegate;

@interface TFNTwitterPOISuggester : NSObject

@property (retain, nonatomic) TFNTwitterComposePlaceStore *placeStore;
@property (weak, nonatomic) id <TFNTwitterPOISuggesterDelegate> delegate;

/* instance methods */
- (id)initWithPlaceStore:(id)store;
- (void)suggestPlaces;
- (void)_fetchDidSucceed:(id)succeed;
- (void)_fetchDidFail:(id)fail;

@end

#endif /* TFNTwitterPOISuggester_h */
