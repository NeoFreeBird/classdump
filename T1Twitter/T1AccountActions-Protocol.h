//
#ifndef T1AccountActions_Protocol_h
#define T1AccountActions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AccountActions <NSObject>

@required

/* required instance methods */
- (id)createFollowActionItemForUser:(id)user userContext:(id)context associatedStatus:(id)status showConfirmation:(_Bool)confirmation fromViewController:(id)controller;
- (void)toggleMuteForUser:(id)user showConfirmationIfNeeded:(_Bool)needed impressionID:(id)id isPromoted:(_Bool)promoted isEarned:(_Bool)earned scribePage:(id)page scribeSection:(id)section scribeComponent:(id)component scribeParameters:(id)parameters completion:(id /* block */)completion;

@optional

@end

#endif /* T1AccountActions_Protocol_h */
