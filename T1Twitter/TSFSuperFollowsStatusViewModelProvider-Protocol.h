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
