//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift44TrendingPageShareViaActionItemDetailProvider_h
#define _TtC14T1TwitterSwift44TrendingPageShareViaActionItemDetailProvider_h
@import Foundation;

#include "T1ShareViaActionItemDetailsProvider-Protocol.h"

@class NSObject, _$sSS;

@interface T1TwitterSwift.TrendingPageShareViaActionItemDetailProvider : NSObject <T1ShareViaActionItemDetailsProvider> { // (Swift)
    /* instance variables */
    Swift.String url;
}

/* instance methods */
- (id)activityViewControllerForViewController:(id)controller account:(id)account source:(id)source scribeContext:(id)context doneBlock:(id /* block */)block;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift44TrendingPageShareViaActionItemDetailProvider_h */
