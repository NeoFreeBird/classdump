//
#ifndef TSAInstructionItem_h
#define TSAInstructionItem_h
@import Foundation;

@class NSObject, NSString, UIImage;

@interface TSAInstructionItem : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *itemDescription;

/* class methods */
+ (id)openSettingsItem;
+ (id)tapBannersItem;
+ (id)tapTwitterItem;
+ (id)tapPrivacyItem;
+ (id)tapLocationItem;
+ (id)tapPhotosItem;
+ (id)tapCalendarsItem;
+ (id)tapCameraItem;
+ (id)tapMicrophoneItem;
+ (id)tapNotificationsItem;
+ (id)tapContactsItem;
+ (id)tapSpeechRecognitionItem;
+ (id)setLocationOnItem;
+ (id)setLockScreenOnItem;
+ (id)setNotificationsOnItem;
+ (id)setTwitterOnItem;

/* instance methods */
- (id)initWithImage:(id)image itemDescription:(id)description;

@end

#endif /* TSAInstructionItem_h */
