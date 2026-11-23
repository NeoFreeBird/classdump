//
#ifndef T1ComposeCardPreviewControllerDelegate_Protocol_h
#define T1ComposeCardPreviewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ComposeCardPreviewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)cardPreviewController:(id)controller didRemoveCardPreviewForReason:(unsigned long long)reason withCardData:(id)data;
- (void)cardPreviewController:(id)controller didRemoveCardPreviewForReason:(unsigned long long)reason withCardData:(id)data;
- (void)cardPreviewController:(id)controller didShowCardPreviewWithCardData:(id)data;
- (void)cardPreviewController:(id)controller didShowCardPreviewWithCardData:(id)data;
- (void)cardPreviewControllerDidStartFetching:(id)fetching;
- (_Bool)isCardPreviewAllowed;
- (_Bool)areMultipleCardURLsAllowed;
- (long long)cardPreviewDisplayMode:(id)mode;
- (_Bool)cardPreviewController:(id)controller shouldRenderCardPreviewForURL:(id)url;

@optional

/* optional instance methods */
- (_Bool)shouldDeferCardPreviewDisplay;
- (_Bool)shouldDeferCardPreviewRemoval;
- (void)cardPreviewController:(id)controller didResolveCardData:(id)data;
- (void)cardPreviewController:(id)controller didResolveCardData:(id)data;

@end

#endif /* T1ComposeCardPreviewControllerDelegate_Protocol_h */
