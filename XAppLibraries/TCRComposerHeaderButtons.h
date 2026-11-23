//
#ifndef TCRComposerHeaderButtons_h
#define TCRComposerHeaderButtons_h
@import Foundation;

@class NSObject;

@interface TCRComposerHeaderButtons : NSObject // (Swift)

/* class methods */
+ (id)makeUnplatteredCloseButtonWithAccessibilityLabel:(id)label;
+ (id)makeCancelButtonWithTitle:(id)title;
+ (id)makeTitleMenuButtonWithTitle:(id)title showsMenu:(_Bool)menu;
+ (void)setTitle:(id)title onTitleMenuButton:(id)button;
+ (id)barButtonItemHostingAccessorySlot:(id)slot;
+ (id)barButtonItemHostingButton:(id)button edge:(unsigned long long)edge;
+ (void)alignHostedButton:(id)button centerXToView:(id)view;
+ (void)alignHostedButton:(id)button leadingEdgeToView:(id)view;

/* instance methods */
- (id)init;

@end

#endif /* TCRComposerHeaderButtons_h */
