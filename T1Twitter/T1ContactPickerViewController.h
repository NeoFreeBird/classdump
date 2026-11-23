//
#ifndef T1ContactPickerViewController_h
#define T1ContactPickerViewController_h
@import Foundation;

@class CNContactPickerViewController, TFSTwitterScribeContext, TFSTwitterUserReference, UIImage;

@interface T1ContactPickerViewController : CNContactPickerViewController

@property (retain, nonatomic) TFSTwitterUserReference *userReference;
@property (retain, nonatomic) UIImage *userAvatar;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */

@end

#endif /* T1ContactPickerViewController_h */
