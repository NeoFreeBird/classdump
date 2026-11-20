//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventMenuActionProvider_h
#define T1LiveEventMenuActionProvider_h
@import Foundation;

@class NSObject;

@interface T1LiveEventMenuActionProvider : NSObject

/* class methods */
+ (id)moreMenuActionItemsWithLiveEvent:(id)event coverStatus:(id)status presentingViewController:(id)controller popoverSourceInfo:(id)info account:(id)account scribeContext:(id)context trustAndSafetyDelegate:(id)delegate completion:(id /* block */)completion;
+ (id)shareMenuActionItemsWithLiveEvent:(id)event coverStatus:(id)status presentingViewController:(id)controller popoverSourceInfo:(id)info account:(id)account scribeContext:(id)context completion:(id /* block */)completion;
+ (id)compositionForLiveEvent:(id)event account:(id)account;

@end

#endif /* T1LiveEventMenuActionProvider_h */
