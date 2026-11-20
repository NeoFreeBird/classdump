//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
