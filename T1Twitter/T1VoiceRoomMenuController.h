//
#ifndef T1VoiceRoomMenuController_h
#define T1VoiceRoomMenuController_h
@import Foundation;

@class NSObject;

@interface T1VoiceRoomMenuController : NSObject

/* class methods */
+ (void)presentWithTitle:(id)title sections:(id)sections sourceView:(id)view inViewController:(id)controller;
+ (void)presentWithTitle:(id)title sections:(id)sections sourceView:(id)view menuSource:(id)source inViewController:(id)controller permittedArrowDirection:(unsigned long long)direction;
+ (_Bool)_t1_presentAsMenuWithTitle:(id)title sections:(id)sections sourceView:(id)view menuSource:(id)source inViewController:(id)controller;

@end

#endif /* T1VoiceRoomMenuController_h */
