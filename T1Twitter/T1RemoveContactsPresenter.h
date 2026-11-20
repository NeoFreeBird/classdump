//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1RemoveContactsPresenter_h
#define T1RemoveContactsPresenter_h
@import Foundation;

@class NSObject;

@interface T1RemoveContactsPresenter : NSObject // (Swift)

/* class methods */
+ (void)presentOnViewController:(id)controller fromView:(id)view forAccount:(id)account withRemoveActionBlock:(id /* block */)block;

/* instance methods */
- (id)init;

@end

#endif /* T1RemoveContactsPresenter_h */
