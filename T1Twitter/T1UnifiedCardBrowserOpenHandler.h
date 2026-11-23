//
#ifndef T1UnifiedCardBrowserOpenHandler_h
#define T1UnifiedCardBrowserOpenHandler_h
@import Foundation;

#include "T1OpenHandler.h"
#include "TUCBrowserOpenHandler-Protocol.h"

@class NSObject, NSURL, UIViewController;

@interface T1UnifiedCardBrowserOpenHandler : NSObject <TUCBrowserOpenHandler>

@property (retain, nonatomic) T1OpenHandler *openHandler;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) UIViewController *viewController;

/* instance methods */
- (id)initWithURL:(id)url scribeContext:(id)context account:(id)account sourceStatus:(id)status presentingViewController:(id)controller;
- (id)initWithViewController:(id)controller;
- (void)openWithCompletion:(id /* block */)completion;

@end

#endif /* T1UnifiedCardBrowserOpenHandler_h */
