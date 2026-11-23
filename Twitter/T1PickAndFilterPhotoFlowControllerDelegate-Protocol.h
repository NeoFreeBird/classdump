//
#ifndef T1PickAndFilterPhotoFlowControllerDelegate_Protocol_h
#define T1PickAndFilterPhotoFlowControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PickAndFilterPhotoFlowControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pickAndFilterPhotoFlowController:(id)controller userDidSelectPhoto:(id)photo type:(long long)type;
- (void)pickAndFilterPhotoFlowController:(id)controller userDidCancelPhotoType:(long long)type;
- (void)pickAndFilterPhotoFlowController:(id)controller removePhotoType:(long long)type;

@end

#endif /* T1PickAndFilterPhotoFlowControllerDelegate_Protocol_h */
