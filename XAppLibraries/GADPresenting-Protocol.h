//
#ifndef GADPresenting_Protocol_h
#define GADPresenting_Protocol_h
@import Foundation;

#include "GADEventContextSource-Protocol.h"

@class UIWindowScene;

@protocol GADPresenting <GADEventContextSource>

@required

@property (readonly, weak, nonatomic) UIWindowScene *windowScene;

/* required instance methods */
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)controller completion:(id /* block */)completion;
- (void)relinquishScreenWithCompletion:(id /* block */)completion;

@optional

@end

#endif /* GADPresenting_Protocol_h */
