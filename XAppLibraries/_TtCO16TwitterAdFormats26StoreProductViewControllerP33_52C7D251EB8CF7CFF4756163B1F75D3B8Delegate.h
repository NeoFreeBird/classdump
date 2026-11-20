//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO16TwitterAdFormats26StoreProductViewControllerP33_52C7D251EB8CF7CFF4756163B1F75D3B8Delegate_h
#define _TtCO16TwitterAdFormats26StoreProductViewControllerP33_52C7D251EB8CF7CFF4756163B1F75D3B8Delegate_h
@import Foundation;

#include "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSObject;

@interface TwitterAdFormats.StoreProductViewController.(Delegate in _52C7D251EB8CF7CFF4756163B1F75D3B) : NSObject <SKStoreProductViewControllerDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 viewController;
    @40@0:8:16@24@32 eventLogger;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 startedAt;
    @40@0:8:16@24@32 didFireDismissHandler;
    @40@0:8:16@24@32 loadCompletion;
}

/* instance methods */
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)finish;
- (id)init;

@end

#endif /* _TtCO16TwitterAdFormats26StoreProductViewControllerP33_52C7D251EB8CF7CFF4756163B1F75D3B8Delegate_h */
