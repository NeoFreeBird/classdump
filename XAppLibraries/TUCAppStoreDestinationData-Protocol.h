//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCAppStoreDestinationData_Protocol_h
#define TUCAppStoreDestinationData_Protocol_h
@import Foundation;

#include "TUCAppStoreData.h"

@protocol TUCAppStoreDestinationData

@required

@property (nonatomic, readonly) TUCAppStoreData *appStoreData;

@optional

@end

#endif /* TUCAppStoreDestinationData_Protocol_h */
