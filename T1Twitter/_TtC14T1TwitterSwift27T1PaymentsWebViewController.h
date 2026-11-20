//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift27T1PaymentsWebViewController_h
#define _TtC14T1TwitterSwift27T1PaymentsWebViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1TwitterSwift.T1PaymentsWebViewController : T1WebViewController // (Swift)

@property (nonatomic, readonly) _Bool hasCustomNavigationBar;

/* instance methods */
- (void)didTapPrint:(id)print;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* _TtC14T1TwitterSwift27T1PaymentsWebViewController_h */
