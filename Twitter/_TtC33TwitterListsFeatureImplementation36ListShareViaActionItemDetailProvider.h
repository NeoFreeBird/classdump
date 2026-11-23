//
#ifndef _TtC33TwitterListsFeatureImplementation36ListShareViaActionItemDetailProvider_h
#define _TtC33TwitterListsFeatureImplementation36ListShareViaActionItemDetailProvider_h
@import Foundation;

#include "T1ShareViaActionItemDetailsProvider-Protocol.h"

@class NSObject, _$sSS;

@interface TwitterListsFeatureImplementation.ListShareViaActionItemDetailProvider : NSObject <T1ShareViaActionItemDetailsProvider> { // (Swift)
    /* instance variables */
    Swift.String url;
}

/* instance methods */
- (id)activityViewControllerForViewController:(id)controller account:(id)account source:(id)source scribeContext:(id)context doneBlock:(id /* block */)block;
- (id)init;

@end

#endif /* _TtC33TwitterListsFeatureImplementation36ListShareViaActionItemDetailProvider_h */
