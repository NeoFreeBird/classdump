//
#ifndef TAFStoreProductViewControllerDelegate_h
#define TAFStoreProductViewControllerDelegate_h
@import Foundation;

#include "SKStoreProductViewControllerDelegate-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, NSString, SKStoreProductViewController, TFSTwitterScribeContext;

@interface TAFStoreProductViewControllerDelegate : NSObject <SKStoreProductViewControllerDelegate>

@property (weak, nonatomic) SKStoreProductViewController *viewController;
@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (nonatomic) double startedAt;
@property (nonatomic) _Bool didFireDismissHandler;
@property (copy, nonatomic) id /* block */ didDismiss;
@property (copy, nonatomic) id /* block */ loadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithScribe:(id)scribe scribeContext:(id)context didDismiss:(id /* block */)dismiss loadCompletion:(id /* block */)completion;
- (void)productViewControllerDidFinish:(id)finish;
- (void)deliverStatus:(long long)status;
- (void)_taf_commonDismissHandlerForProductViewController:(id)controller;

@end

#endif /* TAFStoreProductViewControllerDelegate_h */
