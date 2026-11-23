//
#ifndef TUCAppStoreDestinationDataImpl_h
#define TUCAppStoreDestinationDataImpl_h
@import Foundation;

#include "TUCAppStoreData.h"
#include "TUCAppStoreDestinationData-Protocol.h"

@class NSObject;

@interface TUCAppStoreDestinationDataImpl : NSObject <TUCAppStoreDestinationData> // (Swift)

@property (nonatomic, readonly) TUCAppStoreData *appStoreData;

/* instance methods */
- (id)initWithAppStoreData:(id)data;
- (id)init;

@end

#endif /* TUCAppStoreDestinationDataImpl_h */
