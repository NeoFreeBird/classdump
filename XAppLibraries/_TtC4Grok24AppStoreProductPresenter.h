//
#ifndef _TtC4Grok24AppStoreProductPresenter_h
#define _TtC4Grok24AppStoreProductPresenter_h
@import Foundation;

#include "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSObject, _$syycSg;

@interface Grok.AppStoreProductPresenter : NSObject <SKStoreProductViewControllerDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? dismissCompletion;
}

/* instance methods */
- (void)productViewControllerDidFinish:(id)finish;
- (id)init;

@end

#endif /* _TtC4Grok24AppStoreProductPresenter_h */
