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
