//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_07CEDACD72BFB00475C6165F151175B725AccountActionsCoordinator_h
#define _TtC14T1TwitterSwiftP33_07CEDACD72BFB00475C6165F151175B725AccountActionsCoordinator_h
@import Foundation;

#include "T1AccountActions-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(AccountActionsCoordinator in _07CEDACD72BFB00475C6165F151175B7) : NSObject <T1AccountActions> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

/* instance methods */
- (id)createFollowActionItemForUser:(id)user userContext:(id)context associatedStatus:(id)status showConfirmation:(_Bool)confirmation fromViewController:(id)controller;
- (void)toggleMuteForUser:(id)user showConfirmationIfNeeded:(_Bool)needed impressionID:(id)id isPromoted:(_Bool)promoted isEarned:(_Bool)earned scribePage:(id)page scribeSection:(id)section scribeComponent:(id)component scribeParameters:(id)parameters completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_07CEDACD72BFB00475C6165F151175B725AccountActionsCoordinator_h */
