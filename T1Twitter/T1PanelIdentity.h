//
#ifndef T1PanelIdentity_h
#define T1PanelIdentity_h
@import Foundation;

@class NSObject;

@interface T1PanelIdentity : NSObject

/* class methods */
+ (long long)panelIDForPanelName:(id)name;
+ (id)stringForPanelID:(long long)id;
+ (long long)panelIDForString:(id)string;
+ (id)localizedNameForPanelID:(long long)id;
+ (id)iconImageNameForPanelID:(long long)id withAccountID:(id)id;
+ (id)iconImageNameForPanelID:(long long)id;

@end

#endif /* T1PanelIdentity_h */
