//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
