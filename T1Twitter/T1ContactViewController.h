//
#ifndef T1ContactViewController_h
#define T1ContactViewController_h
@import Foundation;

@class CNContactViewController, TFSTwitterScribeContext;

@interface T1ContactViewController : CNContactViewController

@property (nonatomic) _Bool updatingExistingContact;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (_Bool)isUpdatingExistingContact;

@end

#endif /* T1ContactViewController_h */
