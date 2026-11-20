//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSFSuperFollowsStatusViewModelProvider_Protocol_h
#define TSFSuperFollowsStatusViewModelProvider_Protocol_h
@import Foundation;

#include "TSFSuperFollowsStatusViewModel-Protocol.h"

@protocol TSFSuperFollowsStatusViewModelProvider

@required

@property (nonatomic, readonly) id <TSFSuperFollowsStatusViewModel> superFollowsStatusViewModel;

@optional

@end

#endif /* TSFSuperFollowsStatusViewModelProvider_Protocol_h */
