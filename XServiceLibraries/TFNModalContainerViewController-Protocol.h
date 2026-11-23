//
#ifndef TFNModalContainerViewController_Protocol_h
#define TFNModalContainerViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNModalContainerViewControllerDelegate-Protocol.h"
#include "TFNPresented-Protocol.h"

@class UIViewController;

@protocol TFNModalContainerViewController <NSObject, TFNPresented>

@required

@property (retain, nonatomic) UIViewController *modalContentViewController;
@property (weak, nonatomic) id <TFNModalContainerViewControllerDelegate> delegate;
@property (readonly, nonatomic) _Bool dismissableWithGesture;

/* required instance methods */
- (_Bool)isDismissableWithGesture;

@optional

@end

#endif /* TFNModalContainerViewController_Protocol_h */
