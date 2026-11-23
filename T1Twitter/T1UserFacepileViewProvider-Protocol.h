//
#ifndef T1UserFacepileViewProvider_Protocol_h
#define T1UserFacepileViewProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserFacepileViewProvider <NSObject>

@required

/* required instance methods */
- (id)compactFacepileWithViewModel:(id)model imagePipeline:(id)pipeline;
- (id)expandedFacepileWithViewModel:(id)model profileNavigationEnabled:(_Bool)enabled;
- (void)expandedFacepile:(id)facepile didUpdateUsersWithViewModel:(id)model;
- (id)profileViewControllerForUser:(id)user viewModel:(id)model;

@optional

@end

#endif /* T1UserFacepileViewProvider_Protocol_h */
