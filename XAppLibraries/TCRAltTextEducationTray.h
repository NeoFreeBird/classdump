//
#ifndef TCRAltTextEducationTray_h
#define TCRAltTextEducationTray_h
@import Foundation;

@class NSObject;

@interface TCRAltTextEducationTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithScribe:(id)scribe onWrite:(id /* block */)write;
+ (_Bool)shouldShowEducationForAccountID:(id)id;
+ (void)recordAltTextSavedForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* TCRAltTextEducationTray_h */
