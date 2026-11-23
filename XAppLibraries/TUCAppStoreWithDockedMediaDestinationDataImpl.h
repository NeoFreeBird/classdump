//
#ifndef TUCAppStoreWithDockedMediaDestinationDataImpl_h
#define TUCAppStoreWithDockedMediaDestinationDataImpl_h
@import Foundation;

#include "TUCAppStoreDestinationDataImpl.h"
#include "TUCAppStoreWithDockedMediaDestinationData-Protocol.h"

@class TFSTwitterEntityMedia;

@interface TUCAppStoreWithDockedMediaDestinationDataImpl : TUCAppStoreDestinationDataImpl <TUCAppStoreWithDockedMediaDestinationData> // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;

/* instance methods */
- (id)initWithAppStoreData:(id)data mediaEntity:(id)entity;
- (id)initWithAppStoreData:(id)data;

@end

#endif /* TUCAppStoreWithDockedMediaDestinationDataImpl_h */
