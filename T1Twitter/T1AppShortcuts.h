//
#ifndef T1AppShortcuts_h
#define T1AppShortcuts_h
@import Foundation;

@class NSObject;

@interface T1AppShortcuts : NSObject

/* class methods */
+ (void)registerShortcutItems;
+ (id)shortcutItemForType:(id)type;
+ (id)URLForShortcutItem:(id)item;
+ (id)URLForLaunchOptions:(id)options;

@end

#endif /* T1AppShortcuts_h */
