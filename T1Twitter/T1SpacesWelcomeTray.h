//
#ifndef T1SpacesWelcomeTray_h
#define T1SpacesWelcomeTray_h
@import Foundation;

@class NSObject;

@interface T1SpacesWelcomeTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller onGotIt:(id /* block */)it onOpenURL:(id /* block */)url;

/* instance methods */
- (id)init;

@end

#endif /* T1SpacesWelcomeTray_h */
