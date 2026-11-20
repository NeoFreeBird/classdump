//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileDisplayInterstitialedUserContentProvider_h
#define T1ProfileDisplayInterstitialedUserContentProvider_h
@import Foundation;

#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayInterstitialedUserContentProvider : T1ProfileDisplayContentProvider

@property (nonatomic) _Bool hasInterstitialBeenDismissed;

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (id)scribeSection;
- (id)generateDefaultMainViewController;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (_Bool)private_shouldInterstitialBeSuperceded;
- (_Bool)private_canInterstitialViewAppear;
- (_Bool)private_isSensitiveMediaInterstitialType:(long long)type;

@end

#endif /* T1ProfileDisplayInterstitialedUserContentProvider_h */
