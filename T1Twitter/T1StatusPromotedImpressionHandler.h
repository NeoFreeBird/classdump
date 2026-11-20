//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusPromotedImpressionHandler_h
#define T1StatusPromotedImpressionHandler_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, NSString, TFNDataViewController, TFNTwitterAccount;

@interface T1StatusPromotedImpressionHandler : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) TFNDataViewController *dataViewController;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDataViewController:(id)controller account:(id)account;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)_t1_logStatusPromotedImpressionForCells:(id)cells controller:(id)controller account:(id)account;

@end

#endif /* T1StatusPromotedImpressionHandler_h */
