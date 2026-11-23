//
#ifndef _TtC14T1TwitterSwift25ImageHeaderViewController_h
#define _TtC14T1TwitterSwift25ImageHeaderViewController_h
@import Foundation;

#include "_TtC14T1TwitterSwift25MediaHeaderViewController.h"

@class NSString;

@interface T1TwitterSwift.ImageHeaderViewController : T1TwitterSwift.MediaHeaderViewController // (Swift)

@property (nonatomic, readonly) _Bool prefersStatusBarHidden;
@property (nonatomic, copy) NSString *title;

/* instance methods */
- (void)viewDidLoad;

@end

#endif /* _TtC14T1TwitterSwift25ImageHeaderViewController_h */
