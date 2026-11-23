//
#ifndef T1ProtectedRepostEducationTray_h
#define T1ProtectedRepostEducationTray_h
@import Foundation;

@class NSObject;

@interface T1ProtectedRepostEducationTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller username:(id)username onDismiss:(id /* block */)dismiss;

/* instance methods */
- (id)init;

@end

#endif /* T1ProtectedRepostEducationTray_h */
