//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBPlaygroundViewController_h
#define ONBPlaygroundViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface ONBPlaygroundViewController : TFNItemsDataViewController

/* instance methods */
- (id)initWithAccount:(id)account;

@end

#endif /* ONBPlaygroundViewController_h */
