//
#ifndef T1SubtitledSettingsItem_h
#define T1SubtitledSettingsItem_h
@import Foundation;

@class NSString, TFNGenericItem, UIView;

@interface T1SubtitledSettingsItem : TFNGenericItem

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *accessibilityIdentitier;
@property (copy, nonatomic) NSString *defaultSubtitle;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) UIView *accessoryView;

/* instance methods */
- (id)init;
- (id)private_summary;

@end

#endif /* T1SubtitledSettingsItem_h */
