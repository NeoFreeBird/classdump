//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OpenGraphCardPreviewProvider_h
#define T1OpenGraphCardPreviewProvider_h
@import Foundation;

#include "T1ComposeCardPreviewController.h"
#include "T1ComposeCardPreviewControllerDelegate-Protocol.h"
#include "T1OpenGraphCardPreviewProviderDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount, UIViewController;

@interface T1OpenGraphCardPreviewProvider : NSObject <T1ComposeCardPreviewControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *id;
    NSNumber"16@0:8 *observer;
    NSNumber"16@0:8 *outcomes;
    NSNumber"16@0:8 *pendingResolves;
    NSNumber"16@0:8 *detectedTriggers;
    NSNumber"16@0:8 *attachedTrigger;
    NSNumber"16@0:8 *presentedContent;
}

@property (nonatomic, weak) id <T1OpenGraphCardPreviewProviderDelegate> delegate;
@property (nonatomic, readonly) T1ComposeCardPreviewController *cardPreviewController;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, retain) TFNTwitterAccount *account;

/* instance methods */
- (_Bool)isCardPreviewAllowed;
- (_Bool)areMultipleCardURLsAllowed;
- (long long)cardPreviewDisplayMode:(id)mode;
- (_Bool)cardPreviewController:(id)controller shouldRenderCardPreviewForURL:(id)url;
- (_Bool)shouldDeferCardPreviewDisplay;
- (_Bool)shouldDeferCardPreviewRemoval;
- (void)cardPreviewControllerDidStartFetching:(id)fetching;
- (void)cardPreviewController:(id)controller didResolveCardData:(id)data;
- (void)cardPreviewController:(id)controller didShowCardPreviewWithCardData:(id)data;
- (void)cardPreviewController:(id)controller didRemoveCardPreviewForReason:(unsigned long long)reason withCardData:(id)data;
- (id)initWithAccount:(id)account;
- (void)attachCardData:(id)data;
- (id)init;

@end

#endif /* T1OpenGraphCardPreviewProvider_h */
