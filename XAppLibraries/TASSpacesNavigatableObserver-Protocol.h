//
#ifndef TASSpacesNavigatableObserver_Protocol_h
#define TASSpacesNavigatableObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSpacesNavigatableObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)spaceNavigation:(id)navigation willTransitionToSpaceModel:(id)model;
- (void)spaceNavigation:(id)navigation didTransitionToSpaceModel:(id)model;
- (void)spaceNavigation:(id)navigation didLeaveSpaceAndWillResetSpaceModel:(id)model;

@end

#endif /* TASSpacesNavigatableObserver_Protocol_h */
