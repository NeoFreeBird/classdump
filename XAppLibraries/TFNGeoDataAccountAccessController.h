//
#ifndef TFNGeoDataAccountAccessController_h
#define TFNGeoDataAccountAccessController_h
@import Foundation;

#include "TFNTwitterAccount.h"

@class NSObject;

@interface TFNGeoDataAccountAccessController : NSObject

@property (nonatomic) _Bool authorized;
@property (nonatomic) _Bool backgrounded;
@property (readonly, weak, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool accessAllowed;
@property (readonly, nonatomic) _Bool usingRetainedGeoDataAllowed;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (_Bool)isAccessAllowed;
- (_Bool)isUsingRetainedGeoDataAllowed;
- (void)_tfn_notification_applicationWillEnterForeground:(id)foreground;
- (void)_tfn_notification_applicationDidEnterBackground:(id)background;
- (void)_tfn_notification_authorizationManagerDidUpdateServiceStatus:(id)status;
- (void)_tfn_background_updateAuthorized;
- (_Bool)isAuthorized;
- (_Bool)isBackgrounded;

@end

#endif /* TFNGeoDataAccountAccessController_h */
