//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSignUpReviewViewController_h
#define ONBSignUpReviewViewController_h
@import Foundation;

#include "ONBItemsDataViewController.h"
#include "ONBSignUpReviewViewControllerDelegate-Protocol.h"

@class NSDate, NSString, TFNTwitterAccount;

@interface ONBSignUpReviewViewController : ONBItemsDataViewController {
    /* instance variables */
    id <ONBSignUpReviewViewControllerDelegate> _delegate;
    NSDate *_birthday;
    NSString *_birthdayHint;
    NSString *_email;
    NSString *_emailHint;
    NSString *_name;
    NSString *_nameHint;
    NSString *_phone;
    NSString *_phoneHint;
    TFNTwitterAccount *_account;
}

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model name:(id)name phone:(id)phone email:(id)email birthday:(id)birthday nameHint:(id)hint phoneHint:(id)hint emailHint:(id)hint birthdayHint:(id)hint delegate:(id)delegate;
- (void)update:(_Bool)update;
- (void)submit;
- (id)private_sections;
- (id)private_nameItem;
- (id)private_phoneItem;
- (id)private_emailItem;
- (id)private_birthdayItem;
- (id)private_fieldWithText:(id)text hintText:(id)text action:(id /* block */)action;

@end

#endif /* ONBSignUpReviewViewController_h */
