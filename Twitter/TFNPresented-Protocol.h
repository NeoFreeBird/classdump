//
#ifndef TFNPresented_Protocol_h
#define TFNPresented_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPresented <NSObject>

@required

@optional

/* optional instance methods */
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* TFNPresented_Protocol_h */
