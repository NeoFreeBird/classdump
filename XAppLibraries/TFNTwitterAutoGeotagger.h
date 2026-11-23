//
#ifndef TFNTwitterAutoGeotagger_h
#define TFNTwitterAutoGeotagger_h
@import Foundation;

#include "TFNTwitterComposePlaceStore.h"
#include "TFNTwitterCompositionGeotagSession.h"

@class NSObject;
@protocol TFNTwitterAutoGeotaggerDelegate;

@interface TFNTwitterAutoGeotagger : NSObject

@property (retain, nonatomic) TFNTwitterComposePlaceStore *placeStore;
@property (weak, nonatomic) id <TFNTwitterAutoGeotaggerDelegate> delegate;
@property (retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession;

/* instance methods */
- (id)init;
- (id)initWithPlaceStore:(id)store delegate:(id)delegate;
- (void)performAutotag;
- (void)_fetchDidSucceed:(id)succeed;
- (void)_fetchDidFail:(id)fail;

@end

#endif /* TFNTwitterAutoGeotagger_h */
