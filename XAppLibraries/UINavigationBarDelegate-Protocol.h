//
#ifndef UINavigationBarDelegate_Protocol_h
#define UINavigationBarDelegate_Protocol_h
@import Foundation;

#include "UIBarPositioningDelegate-Protocol.h"

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)navigationBar:(id)bar shouldPushItem:(id)item;
- (void)navigationBar:(id)bar didPushItem:(id)item;
- (_Bool)navigationBar:(id)bar shouldPopItem:(id)item;
- (void)navigationBar:(id)bar didPopItem:(id)item;
- (long long)navigationBarNSToolbarSection:(id)section;

@end

#endif /* UINavigationBarDelegate_Protocol_h */
