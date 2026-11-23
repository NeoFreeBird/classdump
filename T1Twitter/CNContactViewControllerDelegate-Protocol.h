//
#ifndef CNContactViewControllerDelegate_Protocol_h
#define CNContactViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CNContactViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)contactViewController:(id)controller shouldPerformDefaultActionForContactProperty:(id)property;
- (void)contactViewController:(id)controller didCompleteWithContact:(id)contact;

@end

#endif /* CNContactViewControllerDelegate_Protocol_h */
