//
#ifndef T1EditableProfileViewController_Protocol_h
#define T1EditableProfileViewController_Protocol_h
@import Foundation;

#include "T1ProfileViewController-Protocol.h"

@protocol T1EditableProfileViewController <T1ProfileViewController>

@required

/* required instance methods */
- (void)editProfileActionWithCompletion:(id /* block */)completion;
- (void)editProfileActionWithCompletion:(id /* block */)completion;
- (void)editProfileActionWithSelectedEditField:(long long)field completion:(id /* block */)completion;
- (void)editProfileActionWithSelectedEditField:(long long)field completion:(id /* block */)completion;
- (void)enableAccountLinkDisplayActionWithAccountType:(long long)type completion:(id /* block */)completion;
- (void)enableAccountLinkDisplayActionWithAccountType:(long long)type completion:(id /* block */)completion;

@optional

@end

#endif /* T1EditableProfileViewController_Protocol_h */
